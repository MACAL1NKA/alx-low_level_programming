#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Prints only some strings
 * @s: input string 
 * @: finding compared string
 * Return: @s if true else null
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;
    
    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '0')
        {
            if (s[i] == accept[j])
                return(s + i);
            j++;
        }
        i++;
    }
    return ('\0');
}
