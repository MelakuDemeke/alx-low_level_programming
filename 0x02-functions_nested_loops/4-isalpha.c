#include "main.h"

/**
 * _islower - prints 1 or 0
 *
 * Description: when the function get called it check if alpha
 *		and if it is return 1 if not 0
 * @c: the alphabe tobe cheked
 * Return: 0-> shows end void no return
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c >=90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}