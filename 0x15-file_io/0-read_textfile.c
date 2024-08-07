#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: number of letters to read and print.
 *
 * Return: number of letters printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read from the file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	/* Clean up */
	free(buffer);
	close(fd);

	/* Return number of bytes written */
	return (bytes_written);
}
