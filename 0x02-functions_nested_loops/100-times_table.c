#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number to create the times table for (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		_putchar('0'); /* Start each row with '0' */

		for (column = 1; column <= n; column++)
		{
			result = row * column;

			/* Print commas and spaces */
			_putchar(',');
			_putchar(' ');

			/* Print the result */
			if (result < 10)
			{
				_putchar(' '); /* Single space before single-digit numbers */
				_putchar(result + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar((result / 10) + '0'); /* Tens digit */
				_putchar((result % 10) + '0'); /* Units digit */
			}
			else /* result >= 100 */
			{
				_putchar((result / 100) + '0'); /* Hundreds digit */
				_putchar(((result / 10) % 10) + '0'); /* Tens digit */
				_putchar((result % 10) + '0'); /* Units digit */
			}
		}
		_putchar('\n'); /* New line at the end of each row */
	}
}
