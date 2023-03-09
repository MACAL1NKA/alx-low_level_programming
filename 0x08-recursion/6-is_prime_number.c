#include "main.h"
#include <stdio.h>
int check(int n, int i);
/**
 *is_prime_number - chersh the prime number
 *@n: input numner
 *Return: o or 1 or -1
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 *check - chech the prime number
 *@n: input
 *@i: reverance
 *Return: output
 */
int check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check(n, i + 1));
}
