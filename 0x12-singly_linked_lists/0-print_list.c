#include <stdio.h>
#include "main.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 *
 * Return: number of nodes that are printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0]" "(nil)\n");
		else
			printf("%s %u\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
