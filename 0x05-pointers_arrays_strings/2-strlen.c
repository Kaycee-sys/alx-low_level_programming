#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: String of unknkwn length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
