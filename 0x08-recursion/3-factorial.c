#include "main.h"

/**
* factorial -  returns factorial of number
*
* @n: number to equate the factorial
*
* Return: factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
