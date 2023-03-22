#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit :print last digit of @n by se the modulo operator
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
