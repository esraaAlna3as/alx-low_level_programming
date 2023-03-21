#include "main.h"
/**
 * print_alphabet_x10 - print alphabet from a to z 10 times
 *
 * takes no parameters
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
		_putchar(ch);
		}
		_putchar('\n');
	}
}
