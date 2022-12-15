#include "main.h"

/**
* print_line - print straight line
*
* @n: line length
*
* Return: 0-> end of program
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
