#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all the parameters
 *
 * @n: total of parameters
 *
 * Return: result of the sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	va_list args;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
		total += va_arg(args, int);

	va_end(args);
	return (total);
}
