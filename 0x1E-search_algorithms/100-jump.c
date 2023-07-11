#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0;
	size_t step = sqrt(size);
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, jump);

	jump = jump < size ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
