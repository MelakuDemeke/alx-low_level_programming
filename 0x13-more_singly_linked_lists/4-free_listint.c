#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: head node;
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
	head = NULL;
}
