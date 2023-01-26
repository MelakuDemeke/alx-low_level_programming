#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements on a singly linked list
 *
 * @h: pointer to list
 *
 * Return: int
 */

size_t print_list(const list_t *h)
{
	const list_t *hold;
	unsigned int i = 0;

	hold = h;
	while (hold)
	{
		if (hold->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", hold->len, hold->str);
		i++;
		hold = hold->next;
	}
	return (i);
}
