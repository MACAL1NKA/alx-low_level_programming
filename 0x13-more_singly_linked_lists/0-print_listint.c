#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - prints the lenghth
 *@h: input node
 *
 *Return: count.
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *example = h;
    size_t count = 0;

	while (example != NULL)
	{
		printf("%d\n", example->n);
		count += 1;
		example = example->next;
	}
	return (count);
}
