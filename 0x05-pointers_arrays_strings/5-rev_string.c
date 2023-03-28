#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * rev_string - prints a string in reverse
 * @s : char pointer
 *
 */
void rev_string(char *s)
{
	char ch;
	int y;
	int x;
	int i;

	y = _strlen(s);
	x = _strlen(s) / 2;
	for (i = 0; i < x; i++)
	{

		ch = s[i];
		s[i] = s[y - 1 - i];
		s[y - 1 - i] = ch;
	}
}
