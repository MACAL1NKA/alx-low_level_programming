#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * _isalpha - returnst 1 if alpha or not
 * @c: charecter
 * Return: 1 if true or 0 if false.
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
