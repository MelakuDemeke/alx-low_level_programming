#include "main.h"

/**
 * _sqrt_recursion_helper - a helper that does the sqare root
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of n or -1
*/

int _sqrt_recursion_helper(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	else if (min == max)
		return (-1);
	else if (guess_squared < n)
		return (_sqrt_recursion_helper(n, guess + 1, max));
	else
		return (_sqrt_recursion_helper(n, min, guess - 1));
}

/**
* _sqrt_recursion - returns natural square root of a number
*
* @n: number get the natural square root
*
* Return: natural square root of n
*/

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, 1, n));
}
