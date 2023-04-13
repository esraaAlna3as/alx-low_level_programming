#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked- function that allocates memory
* @b : size of memorey to locate
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		return (98);
	return (p);
}
