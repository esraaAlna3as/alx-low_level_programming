#include "main.h"
#include <stdio.h>
/**
 * _strncpy -copy string
 * @dest: char pointer
 * @src: char pointer
 * @n: bytes
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
