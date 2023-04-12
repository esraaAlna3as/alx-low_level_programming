#include <stdlib.h>
/**
 * create_array -  creates an array of chars
 * @size: The size of the array
 * @c: the character to  initializes
 * Return: On success arr , null if size 0 or fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	arr[i] = c;
	return (arr);
}
