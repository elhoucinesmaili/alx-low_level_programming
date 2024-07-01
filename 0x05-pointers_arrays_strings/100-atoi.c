#include "main.h"
#include <limits.h> /* for INT_MAX and INT_MIN */

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (!s)
		return (0);

	s += _skip_whitespace(s);

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (num > (INT_MAX / 10) ||
		    (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		num = num * 10 + (*s - '0');
		s++;
	}

	return (num * sign);
}

/**
 * _skip_whitespace - helper function to skip whitespace characters
 * @s: string pointer
 *
 * Return: number of whitespace characters skipped
 */
int _skip_whitespace(char *s)
{
	int count = 0;

	while (*s == ' ' || *s == '\t')
	{
		s++;
		count++;
	}
	return (count);
}
