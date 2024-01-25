#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * the list
 *
 * @head: head of list
 * @n: value of element
 * Return: the address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
    dlistint_t *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	h = *head;

	if (h = NULL)
	{
        *head = newNode;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newNode;
	}

	newNode->prev = h;

	return (newNode);
}
