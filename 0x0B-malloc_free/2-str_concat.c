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
	int i = 0, j = 0; k = 0;
	char *str1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);	
	while (s1[j])
		j++;
	while (s2[k])
		k++;
	str1 = malloc((sizeof(char) * j) + (sizeof(char) * k) + 1)
	if (str1 == NULL)
		return (NULL);
	while (i < j)
		str1[i] = s1[j];
	i = 0;

	while (i < k)
		str1[i + j] = s2[k];
	str1[i + J] = '\0';
	return (str1);
}
