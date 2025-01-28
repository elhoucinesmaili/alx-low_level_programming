#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index containing `value`, or -1 if `value` is not found
 *         or `array` is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	/* Perform interpolation search as long as conditions hold */
	while ((array[high] != array[low]) &&
	       (value >= array[low]) && (value <= array[high]))
	{
		/* Calculate the probable position using the interpolation formula */
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));

		/* Print the current position being checked */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* Adjust search range based on the comparison */
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos); /* Return the index if value is found */
	}

	/* Check the last remaining element */
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	/* If the value is not within the range, print and return -1 */
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
