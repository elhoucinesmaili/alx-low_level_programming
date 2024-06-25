#include "main.h"

/**
 * print_times_table - prints the times table of n
 * @n: number to create the times table for (0 <= n <= 15)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			int product = row * column;

			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 100)
				{
					_putchar(' ');

					if (product < 10)
						_putchar(' ');
				}
			}

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
			}

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
