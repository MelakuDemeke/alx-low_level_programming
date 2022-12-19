#include "main.h"

/**
* puts_half - print half of string
*
* @str: the string to be cut in half
*/

void puts_half(char *str)
{
	int i, half;

	while (str[i] != '\0')
	{
		i++;
	}
	half = i / 2;
	for (i = half + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
