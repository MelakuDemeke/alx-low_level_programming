#include "main.h"

/**
 * _strpbrk - locate first occurance in string
 * @s: first string
 * @accept: second string
 * Return: pointer to the byte in s accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	return (0);
}
