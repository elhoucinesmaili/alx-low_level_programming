#include "lists.h"

/**
 * free_listp2 - frees a linked list of listp_t
 * @head: pointer to the head of the list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - frees a linked list safely
 * @h: double pointer to the head of the list.
 *
 * Description: The function frees a linked list while avoiding infinite loops
 * by keeping track of previously seen nodes. It uses a `listp_t` linked list
 * to track nodes and ensures proper memory deallocation.
 * Return: the number of nodes that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr = NULL;
	listp_t *new;
	listp_t *add;
	listint_t *curr;

	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
