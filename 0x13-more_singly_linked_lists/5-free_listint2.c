#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Frees a list
 *
 * @head: first node address
 **/

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
}
