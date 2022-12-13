#include"main.h"

/**
 * numLength - returns the length of number
 *
 * @n: value to be checked
 *
 * Return: number of digits
*/

int numLength(int n)
{
	int l = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		l += 1;
	}

	return (l);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 *
 * Return: 0 -> end of program
*/

int main(void)
{
	int i, first0s;
	unsigned long seq1 = 1, seq2 = 2, sum, max = 100000000, first10 = 0,
	first20 = 0, finalSum = 0;

	for (i = 1; i <= 98; ++i)
	{
		if (first10 > 0)
			printf("%lu", first10);
		first0s = numLength(max) - 1 - numLength(seq1);

		while (first10 > 0 && first0s > 0)
		{
			printf("%d", 0);
			--first0s;
		}

		printf("%lu", seq1);

		sum = (seq1 + seq2) % max;
		finalSum = first10 + first20 + (seq1 + seq2) / max;
		seq1 = seq2;
		first10 = first20;
		seq2 = sum;
		first20 = finalSum;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
