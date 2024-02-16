#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *link, *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			link = ht->array[i];
			while (link)
			{
				temp = link->next;
				free(link->key);
				free(link->value);
				free(link);
				link = temp;
			}
		}
	}
	
	free(head->array);
	free(head);
}
