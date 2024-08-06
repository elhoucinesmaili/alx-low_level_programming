#include "lists.h"

/**
 * free_listp3 - frees a linked list of pointers
 * @head: head of the list.
 *
 * Return: no return.
 */
void free_listp3(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list and handles circular references.
 * @h: head of the list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL, *new_node, *add_node;
	listint_t *current_node;

	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));
		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = hptr;
		hptr = new_node;

		add_node = hptr;
		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp3(&hptr);
				return (nnodes);
			}
		}

		current_node = *h;
		*h = (*h)->next;
		free(current_node);
		nnodes++;
	}

	*h = NULL;
	free_listp3(&hptr);
	return (nnodes);
}
