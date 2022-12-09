#include<stdio.h>

/**
 * main - prints the alphabets
 *
 * Description: prints out a-z
 *
 * Return: 0-> indicate end
 *
 */
int main(void)
{
	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
