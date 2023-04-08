#include <stdio.h>
#include "main.h"

/**
 * _puts-:print string
 * @str :pointer to first element in array.
 * Return: void
 */

void _puts(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
	printf("%c", s[i]);
	i++;
	}
	printf("\n");
}
