#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion
 *
 * @head: address of first node
 * @idx: new node position
 * @n: new node data
 *
 * Return: new node address
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *hold;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	hold = *head;
	for (; i < idx - 1 && hold != NULL; i++)
		hold = hold->next;
	if (hold == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = hold->next;
	hold->next = new_node;
	return (new_node);
}
