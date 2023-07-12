#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list of integers
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (list == NULL)
        return NULL;

    skiplist_t *node = list;
    skiplist_t *jump = list;

    while (jump != NULL && jump->n < value)
    {
        node = jump;
        if (jump->express != NULL)
        {
            jump = jump->express;
            printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
        }
        else
        {
            while (jump->next != NULL)
                jump = jump->next;
        }
    }

    printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);

    while (node->index < jump->index && node->n < value)
    {
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
        node = node->next;
    }

    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}
