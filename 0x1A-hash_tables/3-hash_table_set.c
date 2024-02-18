#include "hash_tables.h"
/**
 * hash_table_set - Add an element to a hash table
 * @ht: Pointer to the hash table
 * @key: The key
 * @value: The value attached to key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *val;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	val = strdup(value);
	
	if (val == NULL)
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);
	
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;

			return (1);
		}
	}
	
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(val);
		return (0);
	}

	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (0);
	}
	tmp->value = val;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
