#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @argc: max number of arguments supplied
 * @argv: array of pointers
 * description: exit(99) if it fails, exit(100) if it can't close
 * exit(98) if it can't read, exit(97) if arguments aren't valid
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int fd_from, fd_to, ret_value;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	} while (bytes_read > 0);
	ret_value = close(fd_from);
	if (ret_value == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	ret_value = close(fd_to);
	if (ret_value == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
