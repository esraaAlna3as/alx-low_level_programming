#include "main.h"

/**
 * _print_rev_recursion-function that prints revers string
 * @s: string to revers and print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char *t = s;

		s++;
		_print_rev_recursion(s);
		_putchar(*t);
	}
	s--;
}
