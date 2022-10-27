#include <stdio.h>

/**
* main - print a to z in reverse form
*
* Return: always 0 (success)
*/


int main(void)


{


char letter;

for (letter = 'z'; letter >= 'a';)

{

putchar(letter);

letter--;
}

putchar('\n');

return (0);
}
