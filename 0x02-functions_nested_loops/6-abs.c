#include "holberton.h"
/**
 * -abs - Program that prints the absolute value of a number
 * @n: n is an integer
 *
 * Return: Value of integer
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
