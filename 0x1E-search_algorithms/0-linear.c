#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to search
 *
 * Return: the index of the found value or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	return (-1);
}
