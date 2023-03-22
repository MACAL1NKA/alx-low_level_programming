#include <stdio.h>

/**
 * print_name - pointer to fuction
 * @f: pointrr fuction
 * @name: name of the persom
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
