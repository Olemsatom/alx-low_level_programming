#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a;
a = 0;
while (a < 11)
{
for ( a = 0; a <= 14; a++)
{
_putchar('0' + a);
}
}
_putchar('\n');
}
