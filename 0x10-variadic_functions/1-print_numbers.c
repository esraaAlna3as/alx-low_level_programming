#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: seperator char
 * @n: const var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argsPrint;

	va_start(argsPrint, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(argsPrint, int));
	}
	va_end(argsPrint);
	printf("\n");
}
