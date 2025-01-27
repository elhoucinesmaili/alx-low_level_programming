#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, current;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;
	current = step;

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, current);

	if (current >= size)
		current = size - 1;

	for (size_t i = prev; i <= current && array[i] <= value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}

