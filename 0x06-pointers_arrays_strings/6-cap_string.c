#include "main.h"
#include <stdio.h>
/**
 *cap_string - capitalize first letter
 *@s: input string
 *Return: the output string
 */
char *cap_string(char *s)
{
	int i = 0;

<<<<<<< HEAD
	
	while (s[i] != '\0')
=======
	while (i != '\0')
>>>>>>> b59396d9efe4e8bf31ca7a66271f0e7d029c1a29
	{
		
		if (s[i] >= 97 && s[i] <= 122)
		{
			
			if (i == 0)
			{
				s[i] -= 32;
			}
			
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
				s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
				s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
				s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
				s[i - 1] == 124)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
