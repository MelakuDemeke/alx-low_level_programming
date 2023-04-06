#include "hash_tables.h"

/**
 * hash_table_set - adds or update an element to/in the hash table.
 *
 * @ht: is the hash table you want to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 * @value: The value associated with key, not duplicated
 *
 * Return: sucess -> 1 otherwise-> 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *value_copy;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}

	new->key = strdup(key);

	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
