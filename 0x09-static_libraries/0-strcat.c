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

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
