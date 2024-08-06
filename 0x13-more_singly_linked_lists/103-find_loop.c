#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of the list.
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	/* Move fast pointer by 2 steps and slow pointer by 1 step */
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* If there is a loop, the fast pointer will meet the slow pointer */
		if (slow == fast)
		{
			/* Move slow pointer to the head and find the start of the loop */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow); /* Both pointers are at the start of the loop */
		}
	}

	return (NULL); /* No loop found */
}
