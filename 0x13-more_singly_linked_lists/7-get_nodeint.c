#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list
 *
 * @head: first node
 * @index: node index to return , NULL if empty
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *hold = head;

	while (hold && i < index)
	{
		hold = hold->next;
		i++;
	}

	return (hold ? hold : NULL);
}
