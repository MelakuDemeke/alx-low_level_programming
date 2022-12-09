#include<stdio.h>

/**
 * main - prints the alphabets
 *
 * Description: prints out z-a in revers
 *
 * Return: 0-> indicate end
 *
 */
int main(void)
{
	char start;
	char end = 'a';

	for (start = 'z'; start >= end; start--)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
