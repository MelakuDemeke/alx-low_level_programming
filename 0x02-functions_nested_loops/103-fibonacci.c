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
	unsigned long seq1 = 0, seq2 = 1, sum;
	float finalSum;

	while (1)
	{
		sum = seq1 + seq2;
		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			finalSum += sum;
		}
		seq1 = seq2;
		seq2 = sum;
	}
	printf("%.0f\n", finalSum)

	return (0);
}
