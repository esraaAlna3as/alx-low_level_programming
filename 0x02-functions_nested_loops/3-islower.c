#include "main.h"
/**
 * _islower -functions that checks for lowercase characters
 *
 * @c: character to check
 *
 * Return: 1 if true, 0 otherwise
 *
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        return (0);
}
