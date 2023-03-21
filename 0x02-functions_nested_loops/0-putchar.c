#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	for (ch[i] = '_' ; ch[i] <= 'r' ; i++)
	{
	_putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
