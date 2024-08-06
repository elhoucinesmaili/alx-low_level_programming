#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *checker;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		checker = head;

		while (checker != current)
		{
			if (checker == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (count);
			}
			checker = checker->next;
		}
		current = current->next;
	}
	return (count);
}

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops).
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *checker;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		checker = *h;

		while (checker != current)
		{
			if (checker == current->next)
			{
				*h = NULL;
				return (count);
			}
			checker = checker->next;
		}
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;
	return (count);
}
