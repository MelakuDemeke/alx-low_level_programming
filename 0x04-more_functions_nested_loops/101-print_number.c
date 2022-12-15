#include "main.h"

/**
* print_number - find and print prime factor of 612852475143
*
* @n: number to be printed
*
* Return: 0-> end of program
*/

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar(45);
		number = -number;
	}
	if (number / 10)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
