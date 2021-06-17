#include <stdio.h>
/**
 * main - Entry point
 * print various sizes
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int ainteger;
float afloat;
long  along;
long long alonglong;
char acharacter;
printf("Size of int: %lu bytes\n", sizeof(ainteger));
printf("Size of float: %lu bytes\n", sizeof(afloat));
printf("Size of long int: %lu bytes\n", sizeof(along));
printf("Size of long long int: %lu bytes\n", sizeof(alonglong));
printf("Size of char: %lu byte\n", sizeof(acharacter));
return (0);
}
