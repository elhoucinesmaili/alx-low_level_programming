#include "search_algos.h"

/**
 * binary_search - Performs a binary search on a sorted array of integers
 *                 to find a specific value.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if the value is not
 *         present or the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		/* Print the current search range */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate the middle index */
		i = left + (right - left) / 2;

		/* Check if the middle element is the target value */
		if (array[i] == value)
			return (i);

		/* Narrow the search range based on the value */
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	/* Return -1 if the value is not found */
	return (-1);
}

