#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: number of underscores to print
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
