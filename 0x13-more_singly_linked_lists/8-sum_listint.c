#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in a listint_t list
 * @head: a pointer to the head of the list
 *
 * Return: sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Call recursive helper function to compute the sum */
	sumofnodes(head, &sum);

	return (sum);
}

/**
 * sumofnodes - recursively calculates the sum of all nodes in a listint_t list
 * @head: a pointer to the current node
 * @sum: pointer to the sum variable to be updated
 *
 * Description: This function traverses
 * the list recursively and adds each node's
 * data to the sum.
 */
void sumofnodes(listint_t *head, int *sum)
{
	if (head == NULL)
		return;

	/* Accumulate sum */
	*sum += head->n;

	/* Recur for the next node */
	sumofnodes(head->next, sum);
}
