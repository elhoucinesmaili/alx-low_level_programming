#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the listint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int pos;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Special case for deleting the head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node before the target index */
	current = *head;
	for (pos = 0; pos < index - 1 && current != NULL; pos++)
	{
		current = current->next;
	}

	/* If current is NULL or the next node is NULL, index is out of range */
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	/* Delete the target node */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
