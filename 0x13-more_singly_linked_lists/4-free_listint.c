#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
 listint_t *hold;

 while (head)
 {
 hold = head->next;

 free(head);

 head = hold;
 
 }
}
