#include "holberton.h"

/**
 *_more_numbers - Program that prints numbers 0-14 x10
 *
 * Return: void
 */

void more_numbers(void)
{
int n;
int i;
for (i = 0; i <= 10; i++)
{ 
for (n = 0; n <= 14; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
}
