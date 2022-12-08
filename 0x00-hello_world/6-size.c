#include<stdio.h>
/**
 * main - starting point
 *
 * Description : prints size of various types on the computer it is compiled on anf run on
 *
 * Return:  0 -> indicates ind of program
 *
 */
int main(void)
{
	char ch;
	int in;
	long int loin;
	long long int loloin;
	float fl;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(in));
	printf("Size of a long int: %d byte(s)\n", sizeof(loin));
	printf("Size of a long long int: %d byte(s)\n", sizeof(loloin));
	printf("Size of a float: %d byte(s)\n", sizeof(fl));

	return (0);
}
