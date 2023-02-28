#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generationr
 * Return: alwasy 
 */
int main(void)
{
	char password[84];
	int index = 0;
	int sum = 0;
	int i;
	int j = 0;

	srand(time(0));

	while (sum < 2772)

	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];

	}

	password[index] = '\0';



	printf("%s", password);
	return (0);
}
