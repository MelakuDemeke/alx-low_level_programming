#include<stdio.h>

/**
 * main - prints hex numbers 
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line. which is hex
 *
 * Return: 0-> indicate end
 *
 */
int main(void)
{
	int i;
	char alphaStart;
	char alphaEnd = 'f';
	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (alphaStart = 'a'; alphaStart <= alphaEnd; alphaStart++)
	{
		putchar(alphaStart);
	}
	putchar('\n');
	return (0);
}
