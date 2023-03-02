#include "main.h"
#include <stdio.h>
/**
 *_strncat - adds two strings
 *@dest: input one
 *@src: input two
 *@n: cantrol numbers
 *Return:@dest
 */
 char *_strncat(char *dest, char *src, int n)
 {
    int i = 0;
    int length = 0;
    while(dest[i++])
    {
        length++;
    }
    for (i = 0; src[i] && i < n; i++)
	    dest[length++] = src[i];
	return (dest);
 }
