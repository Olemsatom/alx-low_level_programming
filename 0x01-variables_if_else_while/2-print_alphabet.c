#include <stdio.h>
/**
* main - print alphabet in lowercase
*
* Return: always 0 (success)
*/

int main(void)

{

char letter;

for (letter = 'a'; letter <= 'z';)

{

putchar(letter);
letter++;

}

putchar('\n');

return (0);

}
