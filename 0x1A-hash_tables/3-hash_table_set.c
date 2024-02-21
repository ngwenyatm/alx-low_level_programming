#include "hash_tables.h"
/**
 * hash_table_set - Adds an element in a hash table
 * @ht: Pointer to the hash table
 * @key: The key
 * @value: The value attached to key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
  unsigned long int i = 0;
  char *value_cp, *key_cp;
  hash_node_t *hold, *node;

  if (!key || !ht) {
    return 0;
  }
  if (!*key || !value) {
    return 0;
  }
  value_cp = malloc(strlen(value) + 1);
  if (value_cp == NULL) {
    return 0;
  }
  key_cp = malloc(strlen(key) + 1);
  if (key_cp == NULL) {
    free(value_cp);
    return 0;
  }
  strcpy(value_cp, value);
  strcpy(key_cp, key);
  i = key_index((const unsigned char *)key, ht->size);
  hold = ht->array[i];
  while (hold) {
    if (!strcmp(key, hold->key)) {
      free(hold->value);
      hold->value = value_cp;
      free(key_cp);
      return 1;
    }
    hold = hold->next;
  }
  node = malloc(sizeof(hash_node_t));
  if (node == NULL) {
    free(value_cp);
    free(key_cp);
    return 0;
  }
  node->key = key_cp;
  node->value = value_cp;
  node->next = ht->array[i];
  ht->array[i] = node;
  return 1;
}   
