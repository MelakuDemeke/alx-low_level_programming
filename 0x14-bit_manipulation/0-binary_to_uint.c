#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * @b: binary number
 *
 * Return: int of converted
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_v = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_v = 2 * decimal_v + (b[i] - '0');
	}

	return (decimal_v);
}
