#ifndef _HEADER_
#define _HEADER_
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
    d->name = name;
    d->age = age;
    d->owner = owner;
}

#endif
