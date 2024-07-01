#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	/* Calculate the length of the string */
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	/* Print every second character */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
