#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the listint_t linked list.
 * @index: index of the nth node
 *
 * Return: pointer to nth node
 * or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *hold = head;

	while (hold && count < index)
	{
		hold = hold->next;
		count++;
	}

	if (hold != NULL)
		return (hold);
	else
		return (NULL);
}
