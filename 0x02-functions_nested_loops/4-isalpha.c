#include "main.h"

/**
 * _isalpha - prints 1 or 0
 *
 * Description: when the function get called it check if alpha
 *		and if it is return 1 if not 0
 * @c: the alphabe tobe checked
 * Return: 1 -> alpha 0->not alpha
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
