#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap to numbers
 * @a :pointer to  number to swap
 * @b : pointer to number to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

