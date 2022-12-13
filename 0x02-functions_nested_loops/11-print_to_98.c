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
	if (n == 98)
	{
		printf("%d\n", 98);
	}
	else if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}

}
