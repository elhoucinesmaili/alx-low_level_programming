#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an array of integers
 *                 to find a specific value.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present or the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	/* Iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* Print the current element being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* Check if the current element matches the value */
		if (array[i] == value)
			return (i);
	}

	/* Return -1 if the value is not found */
	return (-1);
}
