#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to listint_t list to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

for (count = 0; (h != 0); count++)
{
	printf("%d\n", h->n);
}
	return (count);
}
