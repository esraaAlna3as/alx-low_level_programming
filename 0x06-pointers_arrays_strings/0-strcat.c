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
	 // Find the end of the dest string
	while (dest[i] != '\0')
	{
		i++;
	}
    // Concatenate the src string to dest
	while (src[j] != '\0') {
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

