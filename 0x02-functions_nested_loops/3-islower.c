#include "main.h"

/**
 * _islower - prints
 *
 * Description: when the function get called it check if lower
 *		anf if it is return 1 if not 0
 * @c: the number tobe cheked
 * Return: 0-> shows end void no return
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
