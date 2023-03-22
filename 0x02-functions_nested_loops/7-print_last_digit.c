#include "main.h"
/**
 * print_last_digit
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
