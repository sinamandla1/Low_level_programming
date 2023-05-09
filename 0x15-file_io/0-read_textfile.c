#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX std output.
 * @filename: name of the file to read.
 * @letters: number of letters to read.
 * Return: The actual number of letters read and printed or 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t r;
	ssize_t written;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, r);
	if (written == -1 || written != r)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (r);
}
