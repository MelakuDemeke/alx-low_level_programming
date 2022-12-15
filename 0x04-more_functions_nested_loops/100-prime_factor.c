#include<stdio.h>

/**
* main - find and print prime factor of 612852475143
*
*
* Return: 0-> end of program
*/

int main(void)
{
	long int n = 612852475143;
	long int divsor = 2, result = 0, maxFact;

	while (n != 0)
	{
		if ((n % divsor) != 0)
			divsor = divsor + 1;
		else
		{
			maxFact = n;
			n = n / divsor;
			if (n == 1)
			{
				printf("%d\n", maxFact);
				result = 1;
				break;
			}
		}
	}
	return (0);
}
