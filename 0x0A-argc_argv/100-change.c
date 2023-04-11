#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *@argc:int  number of arguments
 *@argv: the change
 * Return: 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
	while (cents >= coins[i])
	{
	cents -= coins[i];
	count++;
	}
	}

	printf("%d\n", count);
	return (0);
}

