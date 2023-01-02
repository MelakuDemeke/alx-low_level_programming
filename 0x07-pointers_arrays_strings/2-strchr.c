#include "main.h"

/**
* _strchr - locate character instring
*
* @s: destination buffer
* @c: source to copy
*
* Return: occurence or null if none
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
