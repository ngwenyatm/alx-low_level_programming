#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t  *hold;
	unsigned long int i = 0;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hold = ht->array[i];
		while (hold)
		{
			if (comma)
				printf(", ");
			printf("'%s' : '%s'", hold->key, hold->value);
			hold = hold->next;
			comma = 1;
		}
	}
	printf("}\n");
}
