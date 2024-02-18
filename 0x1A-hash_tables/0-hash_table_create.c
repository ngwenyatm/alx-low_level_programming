#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array used to store key-value pairs.
 * Return: Pointer to the newly created hash table, or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *h_table;
    unsigned long int i;

    h_table = malloc(sizeof(hash_table_t));
    if (!h_table) {
        return NULL;
    }

    h_table->size = size;

    h_table->array = malloc(sizeof(hash_node_t *) * size);
    if (!h_table->array) {
        free(h_table);
        return NULL;
    }

    for (i = 0; i < size; i++) {
        h_table->array[i] = NULL;
    }

    return h_table;
}
