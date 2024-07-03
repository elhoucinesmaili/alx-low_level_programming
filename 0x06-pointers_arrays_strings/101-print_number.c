#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor = 1;
	int digit;
	int negative = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		negative = 1;
	}

	/* Find the divisor to get the largest place value */
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Extract and print each digit */
	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}

	if (negative)
	{
		_putchar('-');
	}
}
