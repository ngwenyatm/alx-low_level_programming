#include "hash_tables.h"

/**
 * hash_table_delete - removes  hash table
 * @ht: pointer to hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hold, *free_progress;
	int i = 0;
	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hold = ht->array[i];
		while (hold)
		{
			freedoms_progress = hold;
			hold = hold->next;
			if (freedoms_progress->key)
				free(freedoms_progress->key);
			if (freedoms_progress->value)
				free(freedoms_progress->value);
			free(freedoms_progress);
		}
}
	}
	free(ht->array);
	free(ht);
}
