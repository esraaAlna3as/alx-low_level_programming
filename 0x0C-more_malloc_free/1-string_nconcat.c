#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concats strings
 * @s1: string1
 * @s2: string2
 * @n: n size
 * Return: return a char val
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, result_len;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	n = s2_len;
	result_len = s1_len + n + 1;
	result = malloc(result_len * sizeof(char));
	if (result == NULL)
	return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}

