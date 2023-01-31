#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list, safely
 *
 * @head: list pointer
 *
 * Return: nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (i);
}
