#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
				_putchar('0'); /* Print the first '0' explicitly */
			else
				_putchar(result / 10 + '0'); /* Print tens digit */
			_putchar(result % 10 + '0'); /* Print units digit */

			if (j < 9)
			{
				_putchar(','); /* Print comma and space if not the last number */
				_putchar(' ');
			}
		}
		_putchar('\n'); /* Move to the next line after each row */
	}
}
