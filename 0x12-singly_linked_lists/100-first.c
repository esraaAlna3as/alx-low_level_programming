#include<stdio.h>
void first(void) __attribute__((constructor));
/**
 * first - print before the main function is executed.
 *
 * Return: void.
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
