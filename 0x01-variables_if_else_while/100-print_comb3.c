#include <stdio.h>

/**
* main - print possible different combinations of two digits
*
* Return: always 0 (success)
*/

int main(void)

{

int num1, num2;

for (num2 = 0; num2 <= 9; num2++)

{

for (num1 = 0; num1 <= 9; num1++)

if (!((num1 == num2) || (num2 > num1)))

{

putchar((num2 % 10) + '0');

putchar((num1 % 10) + '0');


if (!((num1 == '9') && (num2 == '8')))

{
putchar(',');

putchar(' ');

}

}
}

putchar('\n');

return (0);

}
