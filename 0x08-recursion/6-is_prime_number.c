#include "main.h"

/**
 * comparar - function that returns the power of number
 *
 * @n: number
 * @y: counter
 *
 * Return: prime
 */
int comparar(int n, int y)
{
	int count = 0;

	if (y <= n)
	{
		if (n % y == 0)
			count++;
		return (count + comparar(n, y + 1));
	}
	return (count);
}

/**
* is_prime_number - check prime
* @n: number tobr checked
* Return: 1 -> prime or 0 -> not prime
*/

int is_prime_number(int n)
{
	if (comparar(n, 1) == 2)
		return (1);
	else
		return (0);
}
