#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the list
 *
 * Return: address where loop start or NULL-> if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *check, *hold;

	check = hold = head;
	while (check && hold && hold->next)
	{
		check = check->next;
		hold = hold->next->next;
		if (check == hold)
		{
			check = head;
			break;
		}
	}
	if (!check || !hold || !hold->next)
		return (NULL);
	while (check != hold)
	{
		check = check->next;
		hold = hold->next;
	}
	return (hold);
}
