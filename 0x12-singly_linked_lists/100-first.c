#include "lists.h"
#include <stdio.h>
/**
 * print - Prints before main is executed.
 **/

void __attribute__ ((constructor)) premain();
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
