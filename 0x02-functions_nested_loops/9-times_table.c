#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: when the function get called it prints time table up to 9
 *
 * Return: void
 *
 */

void times_table(void)
{
	int i, j;
	int mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = (i * j);
			_putchar(mul);
			_putchar(', ')
		}
		_putchar('\n')
	}
}
