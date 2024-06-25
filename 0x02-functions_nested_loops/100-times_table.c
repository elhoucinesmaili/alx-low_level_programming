#include <stdio.h>

/**
 * print_times_table - prints the multiplication table of n
 * @n: the number up to which the table should be printed
 */
void print_times_table(int n)
{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			putchar('0'); /* Print the first character '0' manually */

			for (mult = 1; mult <= n; mult++)
			{
				putchar(',');
				putchar(' ');

				prod = num * mult;

				/* Printing leading spaces based on the number of digits */
				if (prod <= 9)
				{
					putchar(' ');
					putchar(' ');
				}
				else if (prod <= 99)
				{
					putchar(' ');
				}

				/* Print the product itself */
				printf("%d", prod);
			}
			putchar('\n');
		}
	}
}
