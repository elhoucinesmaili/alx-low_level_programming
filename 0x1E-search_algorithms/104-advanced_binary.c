#include "search_algos.h"

int recursive_binary_search(int *array, size_t low, size_t high, int value);

/**
 * recursive_binary_search - A helper function for advanced_binary that
 * recursively searches for the first occurrence of a value in an array
 * @array: Pointer to the first element of the array to search
 * @low: Starting index of the current search range
 * @high: Ending index of the current search range
 * @value: The value to search for
 *
 * Return: Index of the first occurrence of `value`, or -1 if not found
 */
int recursive_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high || !array)
		return (-1);

	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%d%s", array[i], (i == high) ? "\n" : ", ");

	/* Check for first occurrence of value */
	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return ((int)mid);

	if (array[mid] >= value)
		return (recursive_binary_search(array, low, mid, value));
	return (recursive_binary_search(array, mid + 1, high, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using a modified binary search algorithm that ensures the first occurrence
 * of the value is returned
 * @array: Pointer to the first element of the sorted array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of the first occurrence of `value`, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
