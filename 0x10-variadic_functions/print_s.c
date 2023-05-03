#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_s - Prints a string argument.
 * @a: A va_list containing the string to print.
 */
void print_s(va_list a)
{
	char *str = va_arg(a, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
