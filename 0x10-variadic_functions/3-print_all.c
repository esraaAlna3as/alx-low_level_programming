#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - Prints a char argument.
 * @a: A va_list containing the char to print.
 */
void print_c(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_i - Prints an int argument.
 * @a: A va_list containing the int to print.
 */
void print_i(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * print_f - Prints a float argument.
 * @a: A va_list containing the float to print.
 */
void print_f(va_list a)
{
	printf("%f", va_arg(a, double));
}

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

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	const char formats[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
	j = 0;
	while (formats[j])
	{
		if (format[i] == formats[j])
		{
			switch (format[i])
			{
			case 'c':
			print_c(args);
			break;
			case 'i':
			print_i(args);
			break;
			case 'f':
			print_f(args);
			break;
			case 's':
			print_s(args);
			break;
		}
		if (format[i + 1] != '\0')
		printf(", ");
	}
	j++;
	}
	i++;
	}
	printf("\n");
	va_end(args);
}
