#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;
	unsigned int i;

	/* Allocate memory for the new node */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	/* Initialize the new node */
	newnode->n = n;

	/* Special case for inserting at the head */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	/* Traverse the list to find the insertion point */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	/* If the index is out of range, free the allocated node and return NULL */
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	/* Insert the new node */
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
