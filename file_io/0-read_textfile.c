#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	size_t total = 0;
	size_t to_read;
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	while (total < letters)
	{
		to_read = letters - total;

		if (to_read > 1024)
		{
			to_read = 1024;
		}

		bytes_read = read(fd, buffer, to_read);
		if (bytes_read == -1)
		{
			close(fd);
			return (0);
		}

		if (bytes_read == 0)
		{
			break;
		}

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}

		total += bytes_read;
	}

	close(fd);

	return (total);
}
