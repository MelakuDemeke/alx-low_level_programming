#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter of each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to a function
 * Return: empty if @array and @action is NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
