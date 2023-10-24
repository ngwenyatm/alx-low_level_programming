#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the first element in the list
 *
 * Return: the head node’s data (n).
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;

	int container;

	if ((head == NULL) || (*head == NULL))
		return (0);

	container = (*head)->n;

	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (container);
}
