#include "lists.h"

/**
 * free_listp - frees a linked list of listp_t
 * @head: pointer to the head of the list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list safely
 * @head: pointer to the head of the list.
 *
 * Description: The function prints a list while avoiding infinite loops by
 * keeping track of previously seen nodes.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t index = 0;
	listp_t *hptr = NULL;
	listp_t *new;
	listp_t *add;
	unsigned int i;
	unsigned int flag = 0;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_listp(&hptr);
	return (count);
}
