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

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if ( i != j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (j != 99 || i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
