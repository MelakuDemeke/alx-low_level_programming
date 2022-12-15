#include "main.h"

/**
* print_most_numbers - print 0 - 9 but not 2 & 4
*
* Return: 0-> end of program
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
