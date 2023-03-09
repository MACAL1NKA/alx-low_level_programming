#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - prints the power of some thing
 *@x: lower number
 *@y: power number
 *Return: the power result of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
