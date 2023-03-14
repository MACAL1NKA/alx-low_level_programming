#include "main.h"
#include <stdlib.h>
/**
 *str_concat - adds two strings 
 *@s1: firsr
 *@s2: second
 *Return: diffrent thigs
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, m = 0;
	char *str1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;
	while (s2[k])
		k++;
	m = j + k;
	str1 = malloc((sizeof(char) * m) + 1);
	if (str1 == NULL)
		return (NULL);

	k = 0;
	while (i < m)
	{
		if (i <= j)
			str1[i] = s1[i];
		if (i >= j)
		{
			str1[i] = s2[k];
			k++;
		}
		i++;
	}

	str1[i] = '\0';
	return (str1);
}
