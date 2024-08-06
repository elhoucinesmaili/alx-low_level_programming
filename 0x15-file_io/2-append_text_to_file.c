#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: 1 if successful, -1 if the file does
 * not exist or if the operation fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_length;

	if (filename == NULL)
		return (-1);

	/* Open the file with write-only and append flags */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, no text is appended */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

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
