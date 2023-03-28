#include <stdio.h>
#include "main.h"

/**
 * _puts-:print string
 * @str :pointer to first element in array.
 * Return: void
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
	printf("%c", str[i]);
	i++;
	}
	printf("\n");


}
