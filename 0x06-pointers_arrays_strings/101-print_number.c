#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			/* Handle special case for INT_MIN */
			_putchar('2');
			n = 147483648;  /* convert to positive without sign overflow */
		}
		else
		{
			n = -n;  /* convert negative to positive */
		}
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
