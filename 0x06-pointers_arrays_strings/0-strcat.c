#include <stdio.h>
#include "holberton.h"

/**
 * *_strcat -  Appends the src string to the dest string
 * @dest: string to be appended 
 * @src: string to append
 *
 * Return : pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
 
dest[i] = '\0';
return (dest);
}
