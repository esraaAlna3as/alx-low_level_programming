#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0 in succses and 1 in Error
 */
int main(int argc, char  *argv[])
{
	int x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", x * y);
	return (0);
}
