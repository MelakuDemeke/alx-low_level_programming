#include "main.h"

/**
 * print_alphabet - prints alphabet a - z
 *
 * Description: when the function get called it prints a - z
 * 		using the _putchar function and put new line
 * 		at the end
 * Return: 0-> shows end void no return
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
