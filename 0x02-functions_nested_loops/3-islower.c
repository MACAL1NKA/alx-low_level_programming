#include "main.h"
/**
 * islower.c - Print 1 if lower case eles 0.
 *
 * Return: 1 if true, elso 0.
 */
int _islower(int c)
	{
		if (c > 'a' && c < 'z')
			return (1);
		else
			return (0);
	}
