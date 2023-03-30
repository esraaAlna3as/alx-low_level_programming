#include "main.h"
#include <stdio.h>
/**
 * _strcat -concanite two strings
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	do {
	if (dest[i + 1] == ' ')
	{
	do {
	dest[i + 1] = src[j];
	j++;
	i++;
	} while (src[j] != '\0');
	}
	i++;
	} while (dest[i] != '\0');
	return (dest);
}

