#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of three digits,
 * separated by ", ", where the digits are in ascending order and different.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds, tens, units;

	for (hundreds = 0; hundreds <= 7; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 8; tens++)
		{
			for (units = tens + 1; units <= 9; units++)
			{
				putchar(hundreds + '0');  /* Print hundreds digit */
				putchar(tens + '0');      /* Print tens digit */
				putchar(units + '0');     /* Print units digit */

				if (hundreds < 7 || tens < 8 || units < 9)
				{
					putchar(',');    /* Print comma */
					putchar(' ');    /* Print space */
				}
			}
		}
	}
	putchar('\n');  /* Print new line */

	return (0);
}
