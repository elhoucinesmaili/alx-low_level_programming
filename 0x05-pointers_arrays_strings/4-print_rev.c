#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	/* Calculate the length of the string */
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}

	/* Print the string in reverse */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
