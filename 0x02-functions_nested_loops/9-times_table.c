#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0'); /* Print the initial '0' for the first column */

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult; /* Calculate product */

			/* Print the product with appropriate formatting */
			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0'); /* Print tens digit */
			}
			_putchar((prod % 10) + '0'); /* Print units digit */
		}

		_putchar('\n'); /* Move to the next line after each row */
	}
}
