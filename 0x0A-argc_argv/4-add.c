#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds infinatie numbers
 * @argc: number of arrays
 * @argv: input arrays
 * Return: 0 or one or Error
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *array;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			array = argv[i];

			for (j = 0; j < strlen(array); j++)
			{
				if (array[j] < 48 || array[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(array);
			array++;
		}
		printf("%d\n", sum);
	}
	else
	{
	
	printf("0\n");
	}
	return (0);

}
