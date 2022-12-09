#include<stdio.h>

/**
 * main - prints all combined numbers
 *
 * Description: all possible combinations of single-digit numbers
 *
 * Return: 0-> indicate end
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
