#include "main.h"

/**
* main - print the numbers from 0 - 9
*
* Return: Always 0.
*/
void print_numbers(void)
{
int a;
for (a >= 0; a <= 9; a++)
{
_putchar('0' + a);
}
_putchar('\n');
return (0);
}
