#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Writes a program to check if a number is positive or negative*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Enter a number: \n");
scanf("%d", &n);
if (n > 0)
printf("%d is positive \n", n);
else if (n < 0)
printf("%d is negative \n", n);
else
printf("The number is zero");
return (0);
}