#include "main.h"
#include <stdio.h>
/**
 * _strchr - Prints all after the c charecter in input
 * @s: input string 
 * @c: finding char
 * Return: @s if true else null
 * /
char *_strchr(char *s, char c)
{
    int i = 0;
    while (*s != '\0')
    {
        if (*s == c)
            return(s);
        s++;
    }
    
    if (*s == c)
		return (s);
    
    return ('\0');
}
