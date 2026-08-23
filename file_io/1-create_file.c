#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: The text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
