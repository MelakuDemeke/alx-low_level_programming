#include "main.h"

/**
 * natural_sqare_root_check - natural_sqare_root_checks for the square root
 *
 * @a: first num
 * @b: second num
 *
 * Return: square of number
 */

int natural_sqare_root_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (natural_sqare_root_check(a + 1, b));
}

/**
 * _sqrt_recursion - get natural sqare root of number
 *
 * @n: integer to find sqrt of
 * Return: square root -> if +ve or 0 -> if -ve
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (natural_sqare_root_check(1, n));
}
