#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
* _isdigit -  function that checks for a digit (0 through 9).
* @c : character to check
* Return: 1 if digit 0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
/**
 * StrCheck - checks string
 * @s: string to check
 * Return: 1 or 0
 */
int StrCheck(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!_isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0 in succses and 1 in Error
 */
int main(int argc, char  *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (StrCheck(argv[i]))
		{
		sum = sum + atoi(argv[i]);
		}
		else
		{
		printf("Error\n");
		return (1);
		}
	}
		printf("%d\n", sum);
		return (0);
}

