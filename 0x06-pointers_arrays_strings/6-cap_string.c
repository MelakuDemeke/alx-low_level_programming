#include "main.h"

/**
* cap_string - reverse array
*
* @s: string to change to word upper
*
* Return: upper string
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == ';' || s[i] == '\n' || s[i] == '\t'
		|| s[i] == '{' || s[i] == '}' || s[i] == '(' || s[i] == ')'
		|| s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		|| s[i] == '"')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			i++;
		}
	}
	if (s[0] >= 'a' && s[i] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	return (s);
}
