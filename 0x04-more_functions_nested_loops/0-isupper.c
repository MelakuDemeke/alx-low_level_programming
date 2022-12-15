#include "main.h"

/**
* _isupper - check if upper or lower
* 
* Return: 1 -> if upper , 0 -> if lower
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
