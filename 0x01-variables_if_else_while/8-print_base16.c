#include <stdio.h>

/**
* main - print base 16 digits starting from 0
*
* Return: always 0 (success)
*/


int main(void)


{

int n;
char letter;


n = 0;

while(n < 10)
{

putchar((n % 10) + '0');

}


for (letter = 'a'; letter <= 'f';)

{

putchar(letter);
letter++;

}

return (0);

}
