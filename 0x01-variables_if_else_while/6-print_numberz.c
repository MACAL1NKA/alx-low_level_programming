#include <stdio.h>

/**
 * main - Prints numbers form 0 to 9 using putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
