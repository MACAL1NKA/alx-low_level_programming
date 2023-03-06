#include "main.h"
#include <stdio.h>
/**
 * _strstr - Prints only some strings in input
 * @haystack: input string 
 * @needle: finding compared string
 * Return: string if true else null
 */
char *_strstr(char *haystack, char *needle)
{

	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
