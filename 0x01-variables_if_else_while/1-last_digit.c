#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Program to print the last digit of a number
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
digit = n % 10;
if (digit > 5)
printf("Last digit of %d is %d\" and is greater than 5", n, digit);
else if (digit == 0)
printf("Last digit of %d is %\d and is 0", n, digit);
else if (digit < 6)
printf("Last digit of %d is %\d and is less than 6 and not 0", n, digit);
return (0);
}
