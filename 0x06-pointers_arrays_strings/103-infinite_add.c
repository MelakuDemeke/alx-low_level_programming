#include "main.h"

/**
 * infinite_add - add long number
 *
 * @n1: number 1
 * @n2: number 2
 *
 * @r:  is the buffer that the function will use to store the result
 * @size_r: size of buffer
 * Return: the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, s1, s2, i, j;

	for (s1 = 0; n1[s1]; s1++)
	{
	}
	for (s2 = 0; n2[s2]; s2++)
	{
	}
	if (s1 > size_r || s2 > size_r)
	{
		return (0);
	}
	s1--;
	s2--;
	size_r--;
	for (i = 0; i < size_r; i++, s1--, s2--)
	{
		if (s1 >= 0)
			add += n1[s1] - '0';
		if (s2 >= 0)
			add += n2[s2] - '0';
		if (s1 < 0 && s2 < 0 && add == 0)
			break;
		r[i] = add % 10 + '0';
		add /= 10;
	}
	r[i] = '\0';
	if (s1 >= 0 || s2 >= 0 || add)
		return (0);
	for (i--, j = 0; i > j; i--, j++)
	{
		add = r[i];
		r[i] = r[j];
		r[j] = add;
	}
	return (r);
}
