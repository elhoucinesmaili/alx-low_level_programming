#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two digits,
 * separated by ", ", where the digits are in ascending order and different.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, units;

	for (tens = 0; tens <= 8; tens++)
	{
		for (units = tens + 1; units <= 9; units++)
		{
			putchar(tens + '0');  /* Print tens digit */
			putchar(units + '0'); /* Print units digit */

			if (tens < 8 || units < 9)
			{
				putchar(',');    /* Print comma */
				putchar(' ');    /* Print space */
			}
		}
	}
	putchar('\n');              /* Print new line */

	return (0);
}
