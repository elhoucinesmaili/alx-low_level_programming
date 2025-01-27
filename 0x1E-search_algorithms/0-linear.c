#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	for (size_t index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return ((int)index);
	}

	return (-1);
}
