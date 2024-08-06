#include "main.h"

/**
 * create_file - creates a file and writes text to it.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_length;

	if (filename == NULL)
		return (-1);

	/* Open the file with write-only, create, and truncate flags */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, use an empty string */
	if (text_content == NULL)
		text_content = "";

	/* Calculate the length of text_content */
	for (text_length = 0; text_content[text_length] != '\0'; text_length++)
		;

	/* Write the content to the file */
	bytes_written = write(fd, text_content, text_length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	/* Close the file descriptor */
	close(fd);

	return (1);
}
