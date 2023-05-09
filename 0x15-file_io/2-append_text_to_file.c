#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t length = 0, written, fd;

	fd= open(filename, O_WRONLY | O_APPEND);
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
