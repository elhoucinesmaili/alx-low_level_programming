#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string input parameter
 *
 * Return: converted integer from string
 */
int _atoi(char *s)
{
	unsigned int num = 0;	/** Initialize num to 0 */
	int sign = 1;	/** Initialize sign to positive */

	/** Loop through the string */
	do {
		if (*s == '-')	/** Check if current character is '-' */
			sign *= -1;	/** Toggle the sign */
		else if (*s >= '0' && *s <= '9')	/** Check if current character is a digit */
			num = (num * 10) + (*s - '0');	/** Update num with the new digit */
		else if (num > 0)
			break;	/** Exit the loop */
	} while (*s++);	/** Move to the next character */

	return (num * sign);	/** Return the final number with its sign */
}
