#include "main.h"
#include <stdio.h>

/**
 *string_toupper - change small to upper
 *@s: input string
 *Return: the upper value @s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
