#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - counts number of links
 *@h: input nose
 *Return: no. of links
 */
size_t listint_len(const listint_t *h)
{
const listint_t *example = h;
size_t count = 0;

	while (example != NULL)
	{
		count += 1;
		example = example->next;
	}
	return (count);
}
