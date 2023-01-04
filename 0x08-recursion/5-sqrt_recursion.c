#include "main.h"

/**
 * find_sqare_root - find natural square root of number
 *
 * @num: number to find square root of
 * @root: root tobe tested
 *
 * Return: sqare root of num or -1
 */

int find_sqare_root(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqare_root(num, root + 1));
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
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqare_root(n, root));
}
