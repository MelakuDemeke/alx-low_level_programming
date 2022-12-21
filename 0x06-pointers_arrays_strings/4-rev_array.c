#include "main.h"

/**
* reverse_array - reverse array
*
* @a: array to be reversed
* @n: size fo array
*
* Return: compariton deference.
*/

void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0;
	j = n - 1;

	while (i < e)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++,
		j++;
	}
}
