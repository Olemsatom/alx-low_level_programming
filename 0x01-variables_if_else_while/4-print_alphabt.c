#include <stdio.h>
/**
* main - print alphabet in lowercase excluding q and e
*
* Return: always 0 (success)
*/

int main(void)

{

char letter;

for (letter = 'a'; letter <= 'z';)

{

if (letter != 'e' && letter != 'q') 

putchar(letter);

letter++;

}

putchar('\n');

return (0);

}
