#include "lists.h"

/**
 * checker - helper function that checks if we are in a loop
 * @head: the head node
 *
 * Description: This function will check if we are in a loop by using
 * two pointers, one advancing twice as fast as the other. If they meet,
 * a loop exists.
 * Return: either NULL or the node where a loop exists
 */
listint_t *checker(listint_t *head)
{
	listint_t *lagging = NULL;
	listint_t *leading = NULL;

	lagging = leading = head; /* Initialize both pointers to the head */
	while (lagging)
	{
		lagging = lagging->next;
		leading = leading->next; /* Move the leading pointer */
		if (leading && leading->next)
			leading = leading->next; /* Move the leading pointer again */
		else
			return (NULL); /* No loop found */
		if (lagging == leading) /* Loop detected */
			return (leading);
	}
	return (NULL);
}

/**
 * find_listint_loop - finds where the loop in a linked list starts
 * @head: the head node
 *
 * Description: This function uses the `checker` function to detect loops.
 * It checks if the returned pointer from `checker` is equal to the head
 * node. If so, it returns the head. Otherwise, it increments the head
 * and repeats the check.
 * Return: The address of the node where the loop starts, or NULL if none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop_node;

	while ((loop_node = checker(head))) /* Check for loop */
	{
		if (loop_node == head) /* Loop starts at the head */
			return (head);
		head = head->next; /* Move to the next node */
	}
	return (NULL); /* No loop found */
}

