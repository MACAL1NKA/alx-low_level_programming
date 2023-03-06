#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints diffrent sums 
 * @a: input string 
 *@size: is the size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)

    {
	int i, Sum1, Sum2;

	Sum1 = 0;
	Sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			Sum1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			Sum2 += a[i];
	}
	printf("%d, %d\n", Sum1, Sum2);
}
