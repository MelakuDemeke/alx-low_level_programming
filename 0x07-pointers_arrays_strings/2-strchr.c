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
	while (*s != '\0')
	{
		if (*s != '\0')
		{
			return (s);
		}
		s++;
	}
	if (*S == c)
	{
		return (s);
	}
	return ('\0');
}
