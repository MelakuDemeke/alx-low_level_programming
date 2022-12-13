#include "main.h"

/**
 * print_to_98 -  prints natural numbers from n to 98,
 *
 * Description: when the function get called it prints numbers to 98
 *
 * @n: starting number
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	int i;

	if (n == 0)
	{
		_putchar(n);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
