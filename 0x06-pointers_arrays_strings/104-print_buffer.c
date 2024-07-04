#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position of the first byte in hexadecimal (8 chars) */
		printf("%08x: ", i);

		/* Print the hexadecimal content of the buffer, 2 bytes at a time */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2)
				putchar(' ');
		}

		/* Print the content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (isprint(c))
					putchar(c);
				else
					putchar('.');
			}
		}

		putchar('\n');
	}
}
