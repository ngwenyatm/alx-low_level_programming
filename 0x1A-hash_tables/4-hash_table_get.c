#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key
 * @ht: Pointer to the hash table.
 * @key: The key to value stored
 * Return: the value corresponding to key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	tmp = ht->array[i];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp == NULL)
		return NULL
	else 
		return tmp->value;
}
