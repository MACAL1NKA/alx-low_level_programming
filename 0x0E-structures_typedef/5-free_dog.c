#include <stdio.h>
#include "dog.h"
/**
 *free_dog - makes free all dog var
 *@d: frame of daog
 *Return: new things
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
