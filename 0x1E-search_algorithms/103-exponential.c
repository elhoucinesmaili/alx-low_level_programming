#include "search_algos.h"

size_t get_min(size_t a, size_t b);
int perform_binary_search(int *array, size_t low, size_t high, int value);

/**
 * get_min - Returns the smaller of two size_t values
 * @a: First value
 * @b: Second value
 *
 * Return: The smaller value between `a` and `b`
 */
size_t get_min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

/**
 * perform_binary_search - Performs a binary search on a portion of an array
 * @array: Pointer to the first element of the array
 * @low: Starting index for the binary search
 * @high: Ending index for the binary search
 * @value: Value to search for
 *
 * Return: Index of the value if found, or -1 otherwise
 */
int perform_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], (i == high ? "\n" : ", "));

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 * the Exponential Search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index containing `value`, or -1 if not found or `array` is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = get_min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (perform_binary_search(array, low, high, value));
}
