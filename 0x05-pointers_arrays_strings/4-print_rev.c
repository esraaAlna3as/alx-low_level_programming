#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * _strlen-: return the length of string
 * @s :pointer to first element in array.
 * Return: length of string int value
 */
int _strlen(char *s);
/**
 * print_rev-: prints the revers  of string
 * @s :pointer to first element in array.
 * Return: void
 */


void print_rev(char *s)
{
	int len = _strlen(s);
	int i = 0;

	while (s[i] != '\0')
	{
	printf("%c", s[len - 1]);
	i++;
	len--;
	}
	printf("\n");
}
