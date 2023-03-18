#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int x;
	int z;
	int v = 1;

	for (i = 0 ; i <= 9 ; i++)
	{
	for (j = 0 ; j <= 9 ; j++)
	{
	for (x = 0 ; x <= 9 ; x++)
	{
	for (z = v ; z <= 9 ; z++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(' ');
	putchar(x + '0');
	putchar(z + '0');
	if (i != 7)
	{
	putchar(',');
	putchar(' ');
	}
	v--;
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
