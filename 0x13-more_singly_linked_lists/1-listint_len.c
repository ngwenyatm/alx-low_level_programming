#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked listint_t list.
 * @h: pointer to listint_t list to print
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
