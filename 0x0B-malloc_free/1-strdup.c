#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate a string
 *
 * @str: string to be allocated
 *
 * Return: pointer to a newly allocated space in memory, with @str
 */

char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	;
	i++;
	p = malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
