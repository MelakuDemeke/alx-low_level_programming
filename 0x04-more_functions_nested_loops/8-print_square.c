#include "main.h"

/**
* print_square - print print_square in #
*
* @n: size of square
*
* Return: 0-> end of program
*/

void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
