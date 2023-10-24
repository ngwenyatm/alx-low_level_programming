#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: first node in the listint_t linked list
 *
 * Return: sum of data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t *hold = head;

	int sum = 0;

	while (hold != 0)
	{
		sum += hold->n;

		hold = hold->next;
	}
	return (sum);
}
