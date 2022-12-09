#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: print all possible different combinations of three digits.
 *
 * Return: 0-> indicate end
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = 1; j < 100; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
