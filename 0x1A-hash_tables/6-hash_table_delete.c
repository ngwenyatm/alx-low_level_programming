#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    if (ht == NULL) {
        return;
    }

    for (size_t i = 0; i < ht->size; i++) {
     
        hash_node_t *current = ht->array[i];

        while (current != NULL) {
            hash_node_t *next = current->next;
            free(current->key);
            free(current->value);
            free(current);

            current = next;
        }
    }

    free(ht->array);
    free(ht);
}
