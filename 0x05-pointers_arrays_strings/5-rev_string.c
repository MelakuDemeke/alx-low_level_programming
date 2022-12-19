#include "main.h"
/**
* rev_string - reverse a string
*
* @s: the string to be reversed
*/
void rev_string(char *s)
{
	int counter, i, half;
	char temp;

	for (counter = 0; s[counter] != '\0'; counter++)
	;
	i = 0;
	half = counter / 2;

	while (half--)
	{
		temp = s[counter - i - 1];
		s[counter - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
