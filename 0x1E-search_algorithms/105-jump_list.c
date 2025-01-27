#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             using the jump search algorithm.
 * @list: Pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located,
 *         or NULL if the value is not found or the list is NULL.
 *
 * Description: Prints the value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_size, prev_index;
	listint_t *current, *prev;

	if (!list || size == 0)
		return (NULL);

	step_size = sqrt(size);
	prev = current = list;

	/* Jump through the list until value is greater or end is reached */
	while (current->index < size && current->n < value)
	{
		prev = current;
		prev_index = current->index;

		/* Move `step_size` nodes ahead or to the end of the list */
		for (size_t step = 0; step < step_size && current->next; step++)
			current = current->next;

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev_index, current->index);

	/* Linear search within the identified range */
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
