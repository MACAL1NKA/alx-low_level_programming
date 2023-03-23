#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - new indux counter
 * @array: input array
 * @size: size of the array
 * @cmp: forction to input
 */
 
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool b;

if (array != NULL && size > 0 && cmp != NULL)
{
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
	b = cmp(array[i]);
	if (b == TRUE)
		return (i);
	}
}
	return (-1);
}
