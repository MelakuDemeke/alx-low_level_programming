#include "search_algos.h"

/**
 * find_first_occurrence - Searches recursively for a value in a sorted
 *                             array of integers
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 */

int find_first_occurrence(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	else if (array[i] >= value)
		return (find_first_occurrence(array, left, i, value));
	else
		return (find_first_occurrence(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (find_first_occurrence(array, 0, size - 1, value));
}
