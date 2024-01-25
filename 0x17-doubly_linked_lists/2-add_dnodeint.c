#include "lists.h"

/**
 * add_dnodeint - adds new node to beginning list
 *
 * @head: head of list
 * @n: value of element
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temphead;

	newnode= malloc(sizeof(dlistint_t));
	if (newnode== NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	temphead= *head;

	if (temphead!= NULL)
	{
		while (h->prev != NULL)
			temphead = temphead->prev;
	}

	newnode->next = temphead;

	if (temphead != NULL)
	temphead->prev = newnode;

	*head = newnode;

	return (newnode);
}
