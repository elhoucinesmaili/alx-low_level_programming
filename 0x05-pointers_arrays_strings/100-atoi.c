#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0;      /* Iterator for traversing the string */
	int sign = 1;   /* Indicates the sign of the number, default positive */
	int num = 0;    /* Resulting integer to be returned */

	/* Skip any leading whitespace characters */
	while (s[i] == ' ' || s[i] == '\t')
		i++;

	/* Handle optional sign character */
	if (s[i] == '-')
	{
		sign = -1;  /* Negative sign */
		i++;
	}
	else if (s[i] == '+')
	{
		i++;        /* Positive sign, move to next character */
	}

	/* Process each character until we encounter a non-digit */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow */
		if (num > (INT_MAX / 10) ||
			  (num == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			/* Handle overflow scenario by returning INT_MAX or INT_MIN */
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		/* Update the num by shifting digits and adding the current digit */
		num = num * 10 + (s[i] - '0');
		i++;
	}

	/* Apply the sign to the final result */
	return (num * sign);
}
