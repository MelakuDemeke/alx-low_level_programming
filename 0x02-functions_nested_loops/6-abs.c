#include "main.h"

/**
 * _abs - make absolute value of number
 *
 * Description: when the function get called it check if no is
 *		-ve if it is return +v value of number
 * @n: the number tobe checked
 * Return: absolute value of a number
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
