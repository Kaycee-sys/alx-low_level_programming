#include "holberton.h"
#include <ctype.h>
/**
 * _islower - 'Program that checks if a character is upper or lower case'
 *@c: ASCII character
 * Return: void
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
