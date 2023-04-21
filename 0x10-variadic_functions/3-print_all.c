#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	char *s;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c", c);
		break;

		case 'i':
			printf("%d", va_arg(args, int));
		break;

		case 'f':
			printf("%f", (float)va_arg(args, double));
		break;

		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
   			printf("(nil)");
			else
			printf("%s", s);
		break;

		default:
		break;
	}
		if (format[i + 1])
		printf(", ");

		i++;
	}

va_end(args);

printf("\n");
}
