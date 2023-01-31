#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: Pointer to a list
 *
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		i++;
	}
	printf("%d\n", h->n);

	return (i);
}
