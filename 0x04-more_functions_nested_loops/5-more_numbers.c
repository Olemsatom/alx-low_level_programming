#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int digit, j;
j = 1;
while (j < 11)
{
for (digit = 0; digit <= 14; digit++)
{
_putchar(digit);

}
_putchar('\n');
j++;
}
}
