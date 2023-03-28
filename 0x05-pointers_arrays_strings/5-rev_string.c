#include "holberton.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * rev_string - prints a string in reverse
 * @s : char pointer
 *
 */
void rev_string(char *s)
{
	int len =  _strlen(s);
	int i = 0;

	while (s[i] != '\0')
	{
	printf("%c", s[len - 1]);
	i++;
	len--;
	}
	printf("\n");
}
