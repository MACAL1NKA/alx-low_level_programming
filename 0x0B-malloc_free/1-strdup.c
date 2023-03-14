#include "main.h"
#include <stdlib.h>

/**
 *_strdup - relocates the string
 *@str: input str
 *Return: new string
 */

char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
		s[j] = str[i];
	s[j] = '\0';
	return (s);
}
