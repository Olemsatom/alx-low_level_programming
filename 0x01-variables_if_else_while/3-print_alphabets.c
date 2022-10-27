#include <stdio.h>
/**
* main - print alphabet in lowercase and uppercase
*
* Return: always 0 (success)
*/

int main(void)

{

char letter, cap;

for (letter = 'a'; letter <= 'z';)

{

putchar(letter);
letter++;

}

for (cap = 'A'; cap <= 'Z';)

{

putchar(cap);
cap++;

}

putchar('\n');

return (0);

}
