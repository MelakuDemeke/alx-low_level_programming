# include "main.h"
# include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
		;
	if (s2 != NULL)
		for (; s2[j]; j++)
		;

	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);

	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}

	while (k < i + j)
	{
		p[k] = s2[k - i];
		k++;
	}
	p[k] = '\0';
	return (p);
}
