#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of a list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
