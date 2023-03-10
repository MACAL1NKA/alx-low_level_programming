#include "main.h"
#include <stdio.h>
/**
 * main - prints number of args
 * @argc: numbers of arrays
 * @argv: arrays
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argv;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
