#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Add a new node at the end of list_t a list
 *
 * @head: first node address
 * @str: address of string to be inserted
 *
 * Return: new node address
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *hold, *hold2;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	hold = malloc(sizeof(list_t));
	if (hold == NULL)
		return (NULL);

	hold->str = strdup(str);
	if (hold->str == NULL)
	{
		free(hold);
		return (NULL);
	}
	while (str[len])
		len++;
	hold->len = len;
	hold->next = NULL;

	if (*head == NULL)
	{
		*head = hold;
		return (hold);
	}

	hold2 = *head;
	while (hold2->next)
		hold2 = hold2->next;
	hold2->next = hold;
	return (hold);
}
