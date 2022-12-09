#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - starting point
 *
 * Descritpiton : determine -ve or +ve
 *
 * Return : 0 -> indicate end
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero");
	}
	return (0);
}
