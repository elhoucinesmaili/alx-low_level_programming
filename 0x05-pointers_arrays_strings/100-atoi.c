#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
	int sign = 1; /* Sign of the number, initialized to positive */
	int num = 0;  /* Resulting number */

	/* Skip whitespace characters */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Process digits and convert to integer */
	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}
