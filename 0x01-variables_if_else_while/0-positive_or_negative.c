#include <stdlib.h>
#include <time.h>

/*
 *main - prints is the neber is positive or not 
 *
 *return = Alaways 0.
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX /2;
  if (n>0)
    {
      printf("%d is possitive",n);
    }
  else
    {
      if (n,0)
	{
	  printf("%d is negative",n);
	}
      else
	{
	  printf("%d is zero",n);
	}
    }
  return (0);
}
