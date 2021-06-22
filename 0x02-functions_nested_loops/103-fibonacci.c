#include <stdio.h>

/**
 * main - Program that prints th esum of the even valued terms of a fibon
 *acci sequence and does not exceed 4000000
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
long int a, b, c, d;
a = 0;
b = 1;
c = 0;
d = 0;
while (1)
{
c = a + b;
a = b;
b = c;
if (c > 4000000)
break;
if ((c % 2) == 0)
d += c;
}
printf("%ld\n", d);
return (0);
