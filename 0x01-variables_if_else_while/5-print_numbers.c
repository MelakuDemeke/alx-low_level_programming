#include<stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints out 0-9
 *
 * Return: 0-> indicate end
 *
 */
int main(void)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%i",i);
	}
	putchar('\n');
	return (0);
}
