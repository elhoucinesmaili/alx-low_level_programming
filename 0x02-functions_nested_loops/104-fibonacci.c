#include <stdio.h>
#include "main.h"

/**
 * numLength - Returns the number of digits in an integer.
 *
 * @num: operand number
 * Return: number of digits
 */
int numLength(int num)
{
	int length = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num = num / 10;
		length++;
	}

	return (length);
}

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers starting with 1 and 2,
 *              separated by commas, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long f1 = 1, f2 = 2, sum;
	unsigned long mx = 100000000, flo = 0, f2o = 0, sumo = 0;
	int initialos;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);

		initialos = numLength(mx) + numLength(f1);

		while (flo > 0 && initialos > 0)
		{
			printf("%d", 0);
			initialos--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = flo + f2o + (f1 + f2) / mx;

		f1 = f2;
		flo = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

