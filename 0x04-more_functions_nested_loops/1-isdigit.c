#include "holberton.h"

/**
 * _isupper - Program that checks for a digit
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
