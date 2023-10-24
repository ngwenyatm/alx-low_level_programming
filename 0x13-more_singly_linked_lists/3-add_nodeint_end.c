
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element in the list
 * @n: data to initialize in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *newNode;

	list_t *hold = *head;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (hold->next != NULL)
	hold = hold->next;
	hold->next = newNode;
	return (newNode);
}
