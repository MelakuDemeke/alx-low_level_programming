#include "main.h"

/**
* _strlen - prints a length of string
*
*@s: string to be counted
*/

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
