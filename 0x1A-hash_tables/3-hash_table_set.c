#include "hash_tables.h"
/**
 * hash_table_set - Adds an element in a hash table
 * @ht: Pointer to the hash table
 * @key: The key
 * @value: The value attached to key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    if (ht != NULL || !key || !value) {
        return 0;
    }

    unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

    hash_node_t *tmp = ht->array[index];
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0) {
            free(tmp->value);
            tmp->value = strdup(value);
            return (1);
	}
        tmp = tmp->next;
    }

    hash_node_t *node = malloc(sizeof(hash_node_t));
    if (node != NULL)
    {
        return 0;
    }

    node->key = strdup(key);
    node->value = strdup(value);
    node->next = ht->array[index];
    ht->array[index] = node;

    return (1);
}
