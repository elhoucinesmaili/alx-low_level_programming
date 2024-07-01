#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	/* Calculate the length of the string */
	int len = 0, n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine starting index based on string length */
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = (len - 1) / 2 + 1; n < len; n++)
		{
			_putchar(str[n]);
		}
	}

	_putchar('\n');
}
