#include "main.h"

/**
 * main - return first 50 fabonacci
 *
 * Description: print firs 50 fabonacci
 *
 * Return: 0 -> end of program
 *
 */

int main(void)
{
	int i, seq1, seq2, sum;

	for (i = 0; i < 50; i++)
	{
		sum = seq1 + seq2;
		printf("%d", sum);
		seq1 = seq2;
		seq2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
