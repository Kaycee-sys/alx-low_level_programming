#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the product of two numbers passed to this program
 * @argc: Number of arguments
 * @argv: Array of arguments recieved 
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
