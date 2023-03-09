#include "main.h"
#include <stdio.h>
/**
 *factorial - prints the factorial of input num
 *@n: input num
 *Return: factorial of the input value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
