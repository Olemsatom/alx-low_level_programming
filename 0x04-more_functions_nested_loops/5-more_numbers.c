#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a, j;
j = 1;
while (j < 11)
{
for (a = 0; a <= 14; a++)
{
if (b >= 10)
{
_putchar(a / 10 + '0');
}
_putchar(b % 10 + '0');
}
_putchar('\n');
j++;
}
}
