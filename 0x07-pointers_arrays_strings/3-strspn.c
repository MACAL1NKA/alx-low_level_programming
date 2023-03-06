#include "main.h"
#include <stdio.h>
/**
 * _strspn - ppints the lengsth of substring
 * @s: input string
 * @accept: supstring
 * Return: Nmbers of lenths
 */
unsigned int _strspn(char *s, char *accept)
{
    int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; 
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; 
				printf("%d",i);
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
