#include "holberton.h"

/**
 * _strcat -  Appends the src string to the dest string
 * @dest: string to be appended 
 * @src: string to append
 * @n: number of bytes to append
 *
 * Return : pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;
while (*(dest + i))
i++;
while(( *(dest + i) = *(src + j)));
{
i++;
j++;
}
return (dest);
}
