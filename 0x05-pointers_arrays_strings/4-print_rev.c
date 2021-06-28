#include "holberton.h"

/**
 * prin_rev - Prints a string in reverse
 * @str: String to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int i = 0;
while (s[i]) i++;
i = i - 1;
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
