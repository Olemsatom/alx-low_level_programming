#include "main.h"
/**
* print_last_digit - print the last digit of a number
* @n: number
* Return: always 0
*/

int print_last_digit(int n)

{

int ld = n % 10;

if (n < 0)

{

ld = ld * -1;

}

_putchar(ld + '0');
return (ld);

}
