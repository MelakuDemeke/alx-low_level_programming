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

	printf("Size of a char: %d byte(s)", sizeof(ch));
	printf("Size of an int: %d byte(s)", sizeof(in));
	printf("Size of a long int: %d byte(s)", sizeof(loin));
	printf("Size of a long long int: %d byte(s)", sizeof(loloin));
	printf("Size of a float: %d byte(s)", sizeof(fl));
}
