#include<stdio.h>

/**
* main - find and print prime factor of 612852475143
*
*
* Return: 0-> end of program
*/

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
