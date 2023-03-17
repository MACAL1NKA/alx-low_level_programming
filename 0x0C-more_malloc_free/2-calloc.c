#include "main.h"
#include <stdlib.h>

/**
 * _memset - set all meemore
 *@s: input one
 *@b: input 2
 *@n: input 3
 *Return: into s
 */
char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)

	{

		s[i] = b;

	}
	return (s);

}



/**
 * *_calloc - allocates memory for out array
 * @nmemb: num of elrment
 * @size: size of elmt
 *
 * Return: pointer of elmt
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *ptr;



	if (nmemb == 0 || size == 0)

		return (NULL);



	ptr = malloc(size * nmemb);



	if (ptr == NULL)

		return (NULL);



	_memset(ptr, 0, nmemb * size);



	return (ptr);

}
