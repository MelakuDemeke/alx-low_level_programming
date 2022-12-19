#include "main.h"
/**
* rev_string - reverse a string
*
* @s: the string to be reversed
*/
void rev_string(char *s)
{
	int counter, i, j;
	char change;

	while (s[counter] != 0)
	{
		counter++;
	}
	j = counter - 1;
	i = 0;

	while (j > i)
	{
		change = s[i];
		s[i] = s[j];
		s[j] = change;
		j--;
		i++;
	}

}
