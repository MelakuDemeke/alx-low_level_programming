#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: format of data type
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *string, *separator = "";
	va_list argu;

	va_start(argu, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argu, int));
					break;
				case 'i':
					printf("%s%i", separator, va_arg(argu, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argu, double));
					break;
				case 's':
					string = va_arg(argu, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(argu);
}
