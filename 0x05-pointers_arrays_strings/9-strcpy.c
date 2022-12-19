#include "main.h"

/**
* *_strcpy - copy string from pointer to pointer
*
* @dest: source string pointer
* @src: destination string pointer
*
* Return: strcpy of the string
*/

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
