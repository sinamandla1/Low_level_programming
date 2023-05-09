#include "main.h"
/**
 * create_file - Creates a file with the specified name
 * and writes the content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t length = 0, written, fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		written = write(fd, text_content, length);
		if (written == -1 || written != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
