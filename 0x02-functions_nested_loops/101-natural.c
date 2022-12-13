#include "main.h"

/**
 * main - return sum of natural numbes
 *
 * Description: print sum of all multiple of 3 or 5 below 1024
 *
 * Return: the value of the sum
 *
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
