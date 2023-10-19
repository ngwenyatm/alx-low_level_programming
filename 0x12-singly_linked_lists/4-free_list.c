#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a link_t list
 * @head: pointer the first node of list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
