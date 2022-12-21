#include "main.h"

/**
* _strcmp - compare two string
*
* @s1: first string
* @s2: second string
*
* Return: compariton deference.
*/

int _strcmp(char *s1, char *s2)
{
	int i, difference = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			difference = s1[i] - s2[i];
			break;
		}
	}
	if (difference == 0 && s1[i] == '\0')
	{
		difference = s1[i] - s2[i];
	}
	return (difference);
}
