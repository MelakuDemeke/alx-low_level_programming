#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatinate two string
 *
 * @s1: First string
 * @s2: Second string
 * @n: No of chars to be concatinated to @s2
 *
 * Return: Pointer to the new string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s1_len = 0, s2_len = 0, i = 0;

	if (s1 != NULL)
		for (; s1[s1_len]; s1_len++)
		;
	if (s2 != NULL)
		for (; s2[s2_len]; s2_len++)
		;
	if (n >= s2_len)
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
	{
		s = malloc(sizeof(char) * (s1_len + n + 1));
		s2_len = n;
	}
	if (s == NULL)
		return (NULL);

	while (i < s1_len)
	{
		s[i] = s1[i];
		i++;
	}

	while (i < s1_len + s2_len)
	{
		s[i] = s2[i - s1_len];
		i++;
	}
	s[i] = '\0';
	return (s);
}
