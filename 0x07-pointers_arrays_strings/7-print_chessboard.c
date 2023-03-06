#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Prints only some strings in input
 * @a: input string 
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			putchar('\n');
		}

		putchar(a[i / 8][i - j]);
		i++;
	}
	putchar('\n');
}
