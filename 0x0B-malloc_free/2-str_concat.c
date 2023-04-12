#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to newly allocated memory containing concatenated strings,
 *         NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int s1_len = 0, s2_len = 0, i = 0, j = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str == NULL)
	return (NULL);

	for (; i < s1_len; i++)
	concat_str[i] = s1[i];

	for (; j < s2_len; j++)
	concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';
	return (concat_str);
}

