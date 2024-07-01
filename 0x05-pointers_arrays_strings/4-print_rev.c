#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print characters in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	/* Print newline character at the end */
	putchar('\n');
}
