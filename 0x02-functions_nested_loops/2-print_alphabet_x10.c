#include "main.h"

/**
 *print_alphabet_x10 - print alphaber 10 time.
 */
void print_alphabet_x10(void)
{
char letter;
int cont = 0;

while (cont < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
_putchar('\n');
cont++;
}
}
