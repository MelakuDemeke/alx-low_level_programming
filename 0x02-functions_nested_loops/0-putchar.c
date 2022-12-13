#include "main.h"

/**
 * main - starting point
 *
 * Description: prints _putchar follwed by new line
 *
 * Return: 0->indicates end
 *
 */

int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0);

}
