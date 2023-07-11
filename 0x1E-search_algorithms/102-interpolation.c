#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *			Otherwise, the first index where the value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t position;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		position = left + (((double)(right - left) /
					(array[right] - array[left])) * (value - array[left]));

		if (position < size)
			printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", position);
			break;
		}

		if (array[position] == value)
			return (position);

		if (array[position] > value)
			right = position - 1;
		else
			left = position + 1;
	}

	return (-1);
}
