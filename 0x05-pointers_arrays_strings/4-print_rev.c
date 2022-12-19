#include "main.h"

/**
* print_rev - prints string in revers
*
* @s: the string to be reversed
*/

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
	{
		counter++;
	}
	while (counter > 0)
	{
		counter--;
		_putchar(s[counter]);
	}
	_putchar('\n');
}
