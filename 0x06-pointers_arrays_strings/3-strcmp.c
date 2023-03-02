#include "main.h"
#include <stdio.h>
/**
 *_strcmp - siffrence between two strings
 *@s1: first input
 *@s2: second input
 *Return: output
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}
    printf("a =%d b=%d c=%d\n",a,b,c);
	while (s2[b])
	{
		b++;
	}
    printf("a =%d b=%d c=%d\n",a,b,c);
	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}
    printf("a =%d b=%d c=%d\n",a,b,c);
	return (r);
}
