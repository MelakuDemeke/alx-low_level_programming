#include "main.h"

/**
 * sqare_root - returns the power of number
 *
 * @n: number
 * @y: counter
 *
 * Return: square root
 */
 
int sqare_root(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);

	}
	return (sqare_root(n, y + 1));
}

/**
* _sqrt_recursion - eturns the natural square root of a number
*
* @n: number
*
* Return: natural square root
*/
int _sqrt_recursion(int n)
{
	return (sqare_root(n, 1));
}
