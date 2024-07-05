#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Description: The function prints the sum of
 * the main diagonal and anti-diagonal
 * of a square matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];       /* Sum of the main diagonal elements */
		sum2 += a[i * size + (size - 1 - i)]; /* Sum of the anti-diagonal elements */
	}

	printf("%d, %d\n", sum1, sum2);
}
