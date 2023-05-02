#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

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
		if (format[i] == formats[j] && j != 3)
		{
			switch (format[i])
			{
			case 'c':
			printf("%c", va_arg(args, int));
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			break;
			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			str = "(nil)";
			printf("%s", str);
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
