#include "main.h"
/**
 * print_alphabet - print alphabet from a to z
 * takes no parameters
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');

}
