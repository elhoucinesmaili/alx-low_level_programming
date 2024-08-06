#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to the head of linked list.
 *
 * This function can print lists with a loop.
 * You should go through the list only once.
 * If the function fails, exit the program with status 98.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listnode_t *nodes = NULL; /* stores address of nodes */
	size_t count = 0;

	while (!is_in_nodes(nodes, head))
	{
		if (!add_nodeptr(&nodes, head))
		{
			free_listnode(nodes);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	if (head != NULL)
		printf("-> [%p] %d\n", (void *)head, head->n);

	free_listnode(nodes);
	return (count);
}
