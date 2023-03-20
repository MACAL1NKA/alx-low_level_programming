#include "dog.h"

/**
 * init_dog - initials a dog identity
 *@d: structure 
 *@name: first name
 *@age: actual age
 *@owner: actual aowner
 *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}

