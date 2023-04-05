#include "main.h"

/**
 * _strlen_recursion- :function that return length string
 * @s: string to find it's length
 * Returns:- the length of string as intger
 * return:- integer value
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
