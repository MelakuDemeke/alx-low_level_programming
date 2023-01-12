#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 *
 * @min: first number
 * @max: last number
 *
 * Return: pointer to array
 **/

int *array_range(int min, int max)
{
	int i, total_elements, nb;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	total_elements = max - min + 1;
	p = malloc(sizeof(int) * total_elements);
	if (p == NULL)
	{
		return (NULL);
	}
	nb = min;
	for (i = 0; i < total_elements; i++)
	{
		p[i] = nb;
		nb++;
	}
	return (p);
}
