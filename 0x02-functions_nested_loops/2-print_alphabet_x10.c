#include "main.h"

/**
* print_alphabet_x10 - printing a-z (lowercase) in 10 places
* written by atom
* Return: 0
*/


void print_alphabet_x10(void)

{

int c = 0;
char letter;

for (c = 0; c < 10; c++)
{

for (letter = 'a'; letter <= 'z'; letter++)

{
_putchar(letter);

}

_putchar('\n');
}
}
