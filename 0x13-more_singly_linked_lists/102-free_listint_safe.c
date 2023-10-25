#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list
 * @h: pointer to the first node in a listint_t list
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;

	listint_t *hold;

	if (h == NULL || *h == NULL)
		return (0);

	count = 0;

	while (*h != NULL)
	{
		if ((*h - ((*h)->next)) > 0)
		{
			hold = ((*h)->next);
			free(*h);
			*h = hold;

			count++;
		}

		else
		{
			free(*h);
			*h = NULL;

			count++;

			break;
		}
	}

	*h = NULL;
	return (count);
}
