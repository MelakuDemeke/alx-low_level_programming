#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet a - z 10 times
 *
 * Description: when the function get called it prints a - z 10 times
 *		using the _putchar function and put new line
 *		at the end
 * Return: 0-> shows end void no return
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
