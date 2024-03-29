#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: pointer to hash table
 *
 * Description: print key/value pair
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned char separet_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (separet_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			separet_flag = 1;
		}
	}
	printf("}\n");
}
