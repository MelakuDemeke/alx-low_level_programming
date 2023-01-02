#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: search key
 * @accept: sub str
 *
 * Return: length of prifix substr
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0, l;
	int ischecked = 1;

	while (s[i] != '\0' && ischecked)
	{
		j = 0;
		l = k;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				j++;
		}

		if (l == k)
			ischecked = 0;

		i++;
	}

	return (k);
}
