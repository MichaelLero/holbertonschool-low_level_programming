#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file to append to
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, const char *text_content)
{
	int fd;
	int bytes_written;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i] != '\0')
		{
			i++;
		}
		bytes_written = write(fd, text_content, i);
		if (bytes_written != i)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
