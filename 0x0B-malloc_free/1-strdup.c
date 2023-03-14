#include "main.h"
#include "stdlib.h"

/**
 *_strdup - relocates the string
 *@str: input str
 *Return: new string
 */

char *_strdup(char *str)
{
	int j, i;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
		s[a] = str[i];
	s[a] = '\0';
	return (s);
}
