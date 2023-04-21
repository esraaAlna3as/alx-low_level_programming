#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints char
 * @args: argument list
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - prints int
 * @args: argument list
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - prints float
 * @args: argument list
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - prints string
 * @args: argument list
 */
void print_s(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: format string that specifies the types of the argument list
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, j;
	char *sep = "";
	printer ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].type != NULL)
		{
			if (*(ops[j].type) == format[i])
			{
				printf("%s", sep);
				ops[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
