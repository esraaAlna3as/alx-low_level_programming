#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main-: print it's name
 * @argc: int
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
