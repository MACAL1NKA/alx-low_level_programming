#include "main.h"
#include <stdio.h>

/**
 * _strlen - print length of input
 * @s: input string
 * Return: length of @s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
