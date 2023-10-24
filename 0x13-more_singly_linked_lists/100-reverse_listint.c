#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node in the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *b4;

	listint_t *next;

	b4 = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = b4;
		b4 = *head;
		*head = next;
	}

	*head = b4;
	return (*head);
}
