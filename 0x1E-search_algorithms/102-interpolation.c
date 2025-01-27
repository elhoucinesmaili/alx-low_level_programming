#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation Search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found
 *         or the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		/* Calculate the probe position */
		pos = low + ((value - array[low]) * (high - low) / 
		             (array[high] - array[low]));

		/* Print the current position being checked */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* Check if the value is found */
		if (array[pos] == value)
			return ((int)pos);

		/* Adjust the search range */
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	/* If the value was not found, handle the out-of-range case */
	if (low <= high)
	{
		pos = low + ((value - array[low]) * (high - low) / 
		             (array[high] - array[low]));
		printf("Value checked array[%lu] is out of range\n", pos);
	}

	return (-1);
}
