#include "main.h"
#include <strio.h>
/**
 *_print_rev_recursion - prints string in reverse
 *@S: input string
 *Return:nothing returned
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;

	_putchar(*s);
}
