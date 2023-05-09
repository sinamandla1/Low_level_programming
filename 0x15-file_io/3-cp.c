#include "main.h"
#define BUFFER_SIZE 1024
/**
 * buffer - function that allocates 1024 bytes
 * @name: ptr to a file to read
 * Return: buffer or exit 97 if fails
 */
char *buffer(char *name)
{
	char *buffer;
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", name);
		exit(97);
	}
	return (buffer);
}

/**
 * closing - Function to close file descriptors
 * @fd_from: File descriptor for the source file
 * @fd_to: File descriptor for the destination file
 * @reader: Read status of the file
 * @argv: Array of arguments
 */
void closing(int fd_from, int fd_to, ssize_t reader, char *argv[])
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (reader == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - funtcion that copies the contents of one file to another
 * @agrv: argument count
 * @agrv: array of pointers
 * Return: 0 (success) otherwise exit 97 ,98, 99 or 100 if it fails
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, writer;
	char *buffer;
	ssize_t reader;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		closing(fd_from, fd_to, 0, argv);
		exit(99);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Failed to allocate buffer\n");
		closing(fd_from, fd_to, 0, argv);
		exit(99);
	}
	while ((reader = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writer = write(fd_to, buffer, reader);
		if (writer == -1 || writer != reader)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			closing(fd_from, fd_to, reader, argv);
			exit(99);
		}
	}
	closing(fd_from, fd_to, reader, argv);
	free(buffer);
	if (chmod(argv[2], 0664) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set permissions for %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
