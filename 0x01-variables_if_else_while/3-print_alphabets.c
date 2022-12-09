#include<stdio.h>

/**
 * main - prints the alphabets
 *
 * Description: print a - z & A - Z
 *
 * Return: 0-> indicate end
 */
int main(vid)
{
	char smallStart = 'a';
	char smallEnd = 'z';
	char capStart = 'A';
	char capEnd = 'Z';

	for (smallStart; smallStart <= smallEnd; smallStart++)
	{
		putchar(smallStart);
	}
	for (capStart; capStart <= capEnd; capStart++)
	{
		putchar(capStart);
	}
	putchar('\n');
	return (0);

}
