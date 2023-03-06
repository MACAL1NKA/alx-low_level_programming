#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Prints the copy in hexa
 * @dest: the input string
 * @src: example input
 *@n: number of the loop
 * Return: @src.
 */
 char *_memcpy(char *dest, char *src, unsigned int n)
 {
 	unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
 }
