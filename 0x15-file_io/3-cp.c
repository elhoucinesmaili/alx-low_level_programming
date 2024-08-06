#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * check97 - checks for the correct number of arguments.
 * @argc: number of arguments.
 *
 * Return: void.
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks that file_from exists and can be read.
 * @check: result of the read operation.
 * @file: file_from name.
 * @fd_from: file descriptor of file_from, or -1.
 * @fd_to: file descriptor of file_to, or -1.
 *
 * Return: void.
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - checks that file_to was created and/or can be written to.
 * @check: result of the write operation.
 * @file: file_to name.
 * @fd_from: file descriptor of file_from, or -1.
 * @fd_to: file descriptor of file_to, or -1.
 *
 * Return: void.
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - checks that file descriptors were closed properly.
 * @check: result of the close operation.
 * @fd: file descriptor.
 *
 * Return: void.
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Check the number of arguments */
	check97(argc);

	/* Open the source file */
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);

	/* Open the destination file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);

	/* Copy the content from source to destination */
	while ((lenr = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		lenw = write(fd_to, buffer, lenr);
		check99(lenw, argv[2], fd_from, fd_to);
	}

	/* Check for read errors */
	check98(lenr, argv[1], fd_from, fd_to);

	/* Close file descriptors */
	check100(close(fd_to), fd_to);
	check100(close(fd_from), fd_from);

	return (0);
}
