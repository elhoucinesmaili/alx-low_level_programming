#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	/* Initialize loop variable */
	int i;

	/* Loop through array elements */
	for (i = 0; i < n; i++)
	{
		/* Print element with comma and space */
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}

	/* Print newline after printing all elements */
	printf("\n");
}
