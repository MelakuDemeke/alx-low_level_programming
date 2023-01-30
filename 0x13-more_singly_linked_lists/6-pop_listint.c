#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data, if linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *hold, *next;

	if (*head == NULL)
		return (0);

	hold = *head;
	next = hold->next;
	i = hold->n;

	free(hold);

	*head = next;

	return (i);
}
