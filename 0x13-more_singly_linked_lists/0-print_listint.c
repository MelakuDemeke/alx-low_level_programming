#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: Pointer to a list
 *
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *hold;
	unsigned int i = 0;

	hold = h;
	while (hold)
	{
		printf("%d\n", hold->n);
		i++;
		hold = hold->next;
	}
	printf("%d\n", hold->n);

	return (i);
}
