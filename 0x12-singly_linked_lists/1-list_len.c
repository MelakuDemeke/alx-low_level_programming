#include "lists.h"
#include <stdio.h>

/**
 * list_len - get number of elements
 *
 * @h: pointer to the list
 *
 * Return: length
 */

size_t list_len(const list_t *h)
{
	const list_t *hold;
	unsigned int count = 0;

	hold = h;
	while (hold)
	{
		count++;
		hold = hold->next;
	}
	return (count);
}
