#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to hash table
*/
void hash_table_print(const hash_table_t *ht) {
	unsigned long int i;
	bool needs_comma = true;
	if (ht == NULL) {
    return;
  }

  printf("{\n");

 for (i = 0; i < ht->size; i++) {
    if (ht->array[i] != NULL) {
      needs_comma = false;
      node = ht->array[i];
      while (node != NULL) {
        printf("'%s': '%s'", node->key, node->value);
        if (node->next != NULL) {
          needs_comma = true;
        }
        if (needs_comma) {
          printf(", ");
          needs_comma = false;
        }
        node = node->next;
      }
    }
  }
  printf("}\n");
}
