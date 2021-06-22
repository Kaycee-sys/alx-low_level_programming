#include "holberton.h"
/**
*main - Program that prints Holberton
*
*Return: Always 0 (Success)
*/
int main(void)
{
char holberton[9] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(holberton[i]);
}
_putchar('\n');
return (0);
}
