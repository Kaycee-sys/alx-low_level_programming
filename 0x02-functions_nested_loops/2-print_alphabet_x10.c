#include "holberton.h"
/**
 * 2-print_alphabet_x10 - 'Program that prints alphabets 10 times'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i = 0;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
