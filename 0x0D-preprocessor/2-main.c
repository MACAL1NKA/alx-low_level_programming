#include <stdio.h>

/**
 * main - prints file name
 *
 * Retrun?: alsways 0
 */
int main()
{
#define FILE __BASE_FILE__
	printf("%s\n", FILE);

	return (0);
}
