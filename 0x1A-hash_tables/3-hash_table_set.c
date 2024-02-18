#include "hash_tables.h"
/**
 * hash_table_set - Add an element to a hash table
 * @ht: Pointer to the hash table
 * @key: The key
 * @value: The value attached to key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return 0;
	}
	
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp = NULL, *prev = NULL, *current = ht->array[index];
	
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return 1;
		}
		prev = current;
		current = current->next;
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		return (0);
	}
	
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return 0;
	}
	tmp->value = strdup(value);
	
	if (tmp->value == NULL)
	{
		free(tmp->key);
		free(tmp);
		return 0;
	}
	
	if (prev != NULL)
	{
		prev->next = tmp;
	}
	else
	{
		ht->array[index] = tmp;
	}
	return (1);
}
