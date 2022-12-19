#include "main.h"

/**
* reset_to_98 - reset value to 98
*
* @n: the pointer to be updateded to 98
*
* Return: strcpy of the string
*/

char *_strcpy(char *dest, char *src);
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] =src[i];
		j++
	}
	dest[j] = '\0';

	return (dest);
}
