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
for (hash_node_t *free_progress = hold; free_progress; free_progress = free_progress->next) {
  free(free_progress->key);
  free(free_progress->value);
  free(free_progress);
}
	}
	free(ht->array);
	free(ht);
}
