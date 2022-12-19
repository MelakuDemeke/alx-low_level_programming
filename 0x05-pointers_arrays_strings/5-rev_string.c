#include "main.h"
/**
* rev_string - reverse a string
*
* @s: the string to be reversed
*/
void rev_string(char *s)
{
	int counter, i, j;
	char change1, change2;

	while (s[counter] != 0)
	{
		counter++;
	}
	j = counter - 1;
	i = 0;

	while (j > i)
	{
		change1 = s[i];
		change2 = s[j];
		s[i] = change2
		s[j] = change1;
		j--;
		i++;
	}

}
