#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the list
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	struct list_s *hold = NULL;
	struct list_s *next =  NULL;

	hold = head;
	while (hold != NULL)
	{
		next = hold->next;
		free(hold->str);
		free(hold);
		hold = next;
	}
	head = NULL;
}
