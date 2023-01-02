#include "main.h"

/**
 * _strstr - locate sub str in str
 *
 * @haystack: first str
 * @needle: second str
 *
 * Return: located str
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int needleLen = 0, i = 0, j, tmp, check;

	while (needle[needleLen] != '\0')
		needleLen++;

	while (haystack[i] != '\0')
	{
		tmp = i;
		check = 0;
		for (j = 0; j < needleLen; j++)
		{
			if (haystack[tmp] == needle[j])
			{
				tmp++;
				check++;
			}
		}
		if (check == needleLen)
			return (haystack + i);
		i++;
	}

	return (0);
}
