#include <stdio.h>

/**
 * int_index - searchs for an integer
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer to a function
 *
 * Return: -1 -> if no element match, or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, counter;

	counter = 0;
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				counter++;
				return (i);
			}
		}
	}
	if (size <= 0 || counter == 0)
		return (-1);
	else
		return (0);
}
