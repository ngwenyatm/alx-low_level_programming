#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a linked list.
 * @head: poimter to list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sumn = 0;
	while (head != NULL)
	{
		sumn =  sumn + head->n;
		head = head->next;
	}
	return (sumn);
}
