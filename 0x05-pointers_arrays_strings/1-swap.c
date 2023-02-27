#include "main.h"
#include <stdio.h>

/**
 *void swap_int - swaps tow values with difrent varfiable.
 * @a: first inbut 
 * @b: second input
 * Return: no
 *
 */
void swap_int(int *a, int *b)
/* thsi will swapt a to b and b to a */
{
	int z = *a;
	*a = *b;
	*b = z;
}
