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
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
