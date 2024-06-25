#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to find the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	n = _abs(n); /* Assuming _abs function is properly defined in main.h */

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit); /* Return statement with parentheses */
}
