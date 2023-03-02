#include "main.h"
#include <stdio.h>

/**
 *_strcat - addss two str
 *@dest: input 1
 *@src: input 2
 *Return: @dest
 */
char *_strcat(char *dest, char *src){
     int length = 0;
     int j = 0;

    while (dest[length] != '\0')
    {
     ++length;
    }

  for (; src[j] != '\0'; ++j, ++length) {
    dest[length] = src[j];
  }
  dest[length] = '\0';
  return (dest);
 }
