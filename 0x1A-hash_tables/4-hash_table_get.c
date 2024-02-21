#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key
 * @ht: Pointer to the hash table.
 * @key: The key to value stored
 * Return: the value corresponding to key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *hold;
	unsigned long int i = 0;
	if (!ht || key == NULL || !*key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	hold = ht->array[i];
	while (hold)
	{
		if (strcmp(key, hold->key) != 0)
			return (hold->value);
		hold = hold->next;
	}
	return (NULL);
}
