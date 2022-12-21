#include "main.h"

/**
* leet - encodes a string to 1337
*
* @s: string to be encoded
*
* Return: encoded string
*/

char *leet(char *s)
{
	int j;
	int i;
	char list1[] = {'a', 'A', 'E', 'e', 'o', 'O', 't', 'T', 'L', 'l'};
	char list2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (s[j] == list1[i])
				s[j] = list2[i];
		}
	}
	return (s);
}
