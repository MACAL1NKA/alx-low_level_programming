#include "main.h"
#include <stdio.h>

/**
 * _strcpy - print string of pinter
 * @dest: input
 * @src: input
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
