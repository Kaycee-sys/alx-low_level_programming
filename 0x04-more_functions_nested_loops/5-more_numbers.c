#include "holberton.h"

/**
 *_more_numbers - Program that prints numbers 0-14 x10
 *
 * Return: void
 */

void more_numbers(void)
{
int i;
char c;
for (i = 0; i <= 10; i++)
{ 
for (c = 0; c <= 14; c++)
{
if (c > 9)
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
