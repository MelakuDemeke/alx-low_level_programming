#include "main.h"

/**
 * main - starting point
 *
 * Description: print sum of even valued fibonacci up to 4M
 *
 * Return: 0 -> end of program
 *
 */

int main(void)
{
	int first = 0, second = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);

	return (0);
}
