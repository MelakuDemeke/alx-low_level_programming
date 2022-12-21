#include "main.h"

/**
* _strncpy - copy one string to other
*
* @dest: destination string
* @src: starting string
* @n: limiter
*
* Return: result of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; j < n; j++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
