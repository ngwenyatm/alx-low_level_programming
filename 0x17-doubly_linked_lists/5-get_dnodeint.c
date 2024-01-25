#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: pointer to list
 * @index: index of element
 * Return: element at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

    counter = 0;

	while ((counter < index) && (counter < head->next))
	{
		head = head->next;
        counter++;
	}
	if (counter < index)
		return (NULL);
	return (head);
} 
