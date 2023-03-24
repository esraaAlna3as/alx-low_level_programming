#include <stdio.h>
#include "main.h"

/**
* print_numbers -  function that prints the numbers, from 0 to 9
* Retern void
*/

void print_numbers(void)
{
	int i = 0;
	for (i = 0 ; i <= 9 ; i++)
	{
		_puchar(i + '0');
	}
	_putchar('\n');
}
