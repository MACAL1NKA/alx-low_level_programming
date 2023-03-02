#include "main.h"
#include <stdio.h>
/**
 *_strncpy - coping one string to other varible
 *@dest:first input string
 *@src: second input string
 *@n: number
 *Return: the string @dest
 */
char *_strncpy(char *dest, char *src, int n)
 {
    int i = 0;
    int lenght = 0;

    while(src[i++])
        lenght++;
    for(i = 0; src[i] && i < n; i++)
        dest[i] = src[i];
    for(i = lenght; i < n; i++)
        dest[i] = '\0';
    return (dest);
 }
