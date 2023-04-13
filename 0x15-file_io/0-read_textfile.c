#include "main.h"
/**
 * read_textfile- Reads and prints the text file to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	char *buffer;
	ssize_t fd;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	buffer[bytes_read] = '\0';

	if (bytes_read == 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written =  write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_read);
}
