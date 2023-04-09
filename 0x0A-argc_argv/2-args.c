#include <stdio.h>
#include "main.h"
/**
 * main-: print it's name
 * @argc: int
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0 ;
	
	for (i = 0; i < argc ; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
