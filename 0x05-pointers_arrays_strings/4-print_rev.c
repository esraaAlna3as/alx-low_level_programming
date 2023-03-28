#include <stdio.h>
#include "main.h"

/**
 * _strlen-: return the length of string
 * @s :pointer to first element in array.
 * Return: length of string int value
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
}
