/**
 * main - Entry point
 * print various sizes
 *
 *Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
int intType;
float floatType;
long int longInt;
long long int llInt;
double doubleType;
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longInt));
printf("Size of long long int: %zu bytes\n", sizeof(llInt));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
