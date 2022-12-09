#include<stdio.h>

/**
 * main - prints the alphabets
 *
 * Description: print a - z & A - Z
 *
 * Return: 0-> indicate end
 */
int main(void)
{
	char smallStart;
	char smallEnd = 'z';
	char capStart;
	char capEnd = 'Z';

	for (smallStart = 'a'; smallStart <= smallEnd; smallStart++)
	{
		putchar(smallStart);
	}
	for (capStart = 'A'; capStart <= capEnd; capStart++)
	{
		putchar(capStart);
	}
	putchar('\n');
	return (0);

}
