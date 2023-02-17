#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *main - prints is the neber is positive or not
 *
 *return = Alaways 0.
 */
int main(void)
/**
 *Description - this main part print the negetive
 *positive and zero
 */
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
}
return (0);
}
