#include "main.h"

/**
* _puts - prints recived string with new line
*
* @str: string a new line will be added on
*/

void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
