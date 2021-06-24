#include <stdio.h>
/**
 * main - Entry point
 * Description: prints numbers 1 to 100, prints Fizz for multiples of 3, Buzz
 * for multiples of 5 and FizzBuzz for multiples of 3 and 5
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int i;

for (i = 1; i < 100; i++)
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
printf("Buzz");
printf("\n");
return (0);
}
