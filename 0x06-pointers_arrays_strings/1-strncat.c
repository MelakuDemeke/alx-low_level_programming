#include "main.h"

/**
* _strncat - concatinates two string
*
* @dest: destination string
* @src: starting string
* @n: limiter
*
* Return: result of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
