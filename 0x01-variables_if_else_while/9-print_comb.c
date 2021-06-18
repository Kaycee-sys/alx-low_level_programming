#include <stdio.h>
/**
0;276;0c* main -Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a != '9')
putchar(',');
putchar(' ');
}
return (0);
}
