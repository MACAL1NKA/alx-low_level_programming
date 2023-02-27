#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string ussin -putchar
 * @str: input string
 * Return - no
 */
void _puts(char *str)
{
	for(; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
