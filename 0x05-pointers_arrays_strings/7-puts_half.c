#include "holberton.h"

/**
 * puts_half -  prints half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
int j = 0, int i = 0;

while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
