#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *			Otherwise, a pointer to the first node where the value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *node = list;
	listint_t *jump = list;

	if (list == NULL || size == 0)
		return (NULL);

	while (jump->index < size && jump->n < value)
	{
		node = jump;
		for (size_t i = 0; i < step && jump->next; i++)
			jump = jump->next;
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	if (node->n == value)
		return (node);
	else
		return (NULL);
}
