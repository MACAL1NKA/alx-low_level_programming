#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - print the lenght of string
 *@s: input string 
 *Return: something else
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
