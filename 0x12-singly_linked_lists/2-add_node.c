#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add node at head
 * 
 * @head: head address
 * @str: address of new addition
 * 
 * Return: new address or NULL->if list_t=null
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
