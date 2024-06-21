#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by ", " in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			/* Print first number */
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');

			/* Print space */
			putchar(' ');

			/* Print second number */
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			/* Print comma and space if not the last pair */
			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Print newline at the end */
	putchar('\n');

	return (0);
}
