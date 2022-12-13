#include "main.h"

/**
 * print_last_digit - get last digit of number
 *
 * Description: when the function get called it returns last digit
 *		of the number
 * @n: the number tobe checked
 * Return: last digit of number
 *
 */

int print_last_digit(int n)
{
	int last_dig = n % 10;
	return (last_dig);
}
