#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list.
 * @head: pointer to the first node
 * @str: string to be stored in the list_t list.
 * Return: the address of newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add
    list_t *holder;
	 

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (size_t count = 0; str[count]; count++)

	add->len = count;
	add->next = NULL;
	holder = *head;

	if (holder == NULL)
	{
		*head = add;
        return (add)
	}
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		    holder->next = add;
	}

	return (add);
}
