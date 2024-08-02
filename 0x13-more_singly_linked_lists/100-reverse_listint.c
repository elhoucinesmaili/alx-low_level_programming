#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next; /* Store next node */
		(*head)->next = prev; /* Reverse current node's pointer */
		prev = *head;         /* Move prev to current node */
		*head = next;         /* Move to next node in the list */
	}

	*head = prev; /* Update head to point to the new first node */

	return (*head);
}
