#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list.
 * @head: pointer to the first node
 * @str: string to be stored in the list_t list.
 * Return: the address of newly added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	
	list_t *newNode;

	list_t *hold;

	hold = *head;

	for(count = 0; (str[count]);count++)

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	newNode->len = count;

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

