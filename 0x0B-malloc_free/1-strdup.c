#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: On success dup , null if string = null or fails.
 */

char *_strdup(char *str)
{
	char *dup;
	int len;

	if (str == NULL)
	return (NULL);

	len = strlen(str);
	dup = (char *) malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	return (NULL);

	strcpy(dup, str);
	return (dup);
}

