#include "main.h"
#include <stdio.h>
/**
 * leet - changes alphatet to number
 * @s: input string
 * Return: @s
 */
char *leet(char *s)
{
	int i = 0;
	int n =0;
	int str1[] = {65, 69, 79, 84, 76};
	int str2[] = {97, 101, 111, 116, 108};
	int res[] = {52, 51, 48, 55, 49};

	
	while (s[i] != '\0')
	{
		
		for (n = 0; n < 5; n++)
		{
		    if (s[i] == str1[n] || s[i] == str2[n])
		    {
		        s[i] = res[n];
		    }
		}
		
		i++;
	}
	return (s);
}
