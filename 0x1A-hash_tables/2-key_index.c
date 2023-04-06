#include "hash_tables.h"

/**
 * key_index - give index to stor key and vlue in hash table
 *
 * @key: key to get index
 * @size: hash table array size
 *
 * Return: index of the key
 *
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(size) % key);
}
