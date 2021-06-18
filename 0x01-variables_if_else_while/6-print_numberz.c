#include <stdio.h>
/**
0;276;0c *main - Entry Points
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
