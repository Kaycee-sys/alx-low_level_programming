#include <stdio.h>
/**
 *main - A program that prints alphabets in lower case except q and e
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for(ch = 'a' ; ch <= 'z' ; ch++)
if(ch != 'e' && ch != 'q')
{
putchar(ch);
}
putchar('\n');
return (0);
}
