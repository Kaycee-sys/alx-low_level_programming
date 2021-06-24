#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line of length n
 * @n: length of diagonal line
 *
 * Return: void
 */


void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
 for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
