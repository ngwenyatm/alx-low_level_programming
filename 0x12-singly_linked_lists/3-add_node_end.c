#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list.
 * @head: pointer to the first node
 * @str: string to be stored in the list_t list.
 * Return: the address of newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	list_t *holder;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	
	if (str == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (size_t count = 0; str[count]; count++)

	newNode->len = count;
	newNode->next = NULL;
	holder = *head;

	if (holder == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		while(holder->next != NULL)
			holder = holder->next;
			holder->next = newNode;
	}

	return (newNode);
}
