#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to hash table
*/

void hash_table_print(const hash_table_t *ht)
{
    if (ht == NULL) {
        return;
		    }

    printf("{");

   
    for (size_t i = 0; i < ht->size; i++) {
        hash_node_t *node = ht->array[i];
        while (node) {
            printf("'%s': '%s'", node->key, node->value);
            node = node->next;
            if (node) {  
                printf(", ");
            }
        }
    }

    printf("}\n");
}
