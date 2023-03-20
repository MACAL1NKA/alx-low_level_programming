#include <stdio.h>

/**
 * main - prints file name
 *
 * Return: alsways 0
 */
int main(void)
{
#define FILE __BASE_FILE__
	printf("%s\n", FILE);

	return (0);
}
