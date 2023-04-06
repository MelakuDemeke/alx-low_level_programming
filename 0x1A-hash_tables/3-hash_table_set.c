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
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
}
