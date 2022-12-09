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
		if (i == 9)
		{
			putchar(48 + i);
		}
		else
		{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
