#include "holberton.h"
/**
 * print_alphabet - 'Program that prints alphabets'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
