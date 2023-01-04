#include "main.h"

/**
* _puts_recursion - print string with newline
*
* @s: string tobe printed
*
* Return: string followd by new lien
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n')
	}

}
