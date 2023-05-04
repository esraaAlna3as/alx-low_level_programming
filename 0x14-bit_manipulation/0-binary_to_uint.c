#include "main.h"
/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	
	if (!b) 
	{
	return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		result = result * 2 + (b[i] - '0');
		else
			return (0);
		i++;
	}
	return (result);
}
