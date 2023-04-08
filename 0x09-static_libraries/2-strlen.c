#include <stdio.h>
#include "main.h"

/**
 * _strlen-: return the length of string
 * @s :pointer to first element in array.
 * Return: length of string int value
 */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
	count++;
	i++;
	}
	return (count);
}
