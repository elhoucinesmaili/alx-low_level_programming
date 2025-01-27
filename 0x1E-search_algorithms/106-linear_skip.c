#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list.
 * @list: Pointer to the head of the skip list to traverse.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not found or list is NULL.
 *
 * Description: Assumes a skip list with sorted values and
 *              a single express lane with evenly spaced nodes.
 *              Prints values at each step of the search.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);

	current = list;

	/* Traverse express lane to find the range where value might exist */
	while (current->express && current->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->express->index, current->express->n);
		current = current->express;
	}

	express = current->express ? current->express : current;

	printf("Value found between indexes [%lu] and [%lu]\n",
	       current->index, express->index);

	/* Perform linear search within the identified range */
	while (current && current->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
