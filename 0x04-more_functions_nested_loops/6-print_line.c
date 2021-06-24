#include "holberton.h"

/**
 * print_line - Program that draws a straight line n times
 * @n: Number of times it appears
 *
 * Return: void
 */


void print_line(int n)
{
char c;
for (c = 0; c < n; c++)
{
_putchar('_');
}
_putchar('\n');
}
