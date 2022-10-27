#include <stdio.h>

/**
* main - print all single digits of base 10 starting from 0
*
* Return: always 0 (success)
*/


int main(void)


{


int num;


num = 0;

while (num < 10)

{

putchar((num % 10) + '0');

num++;

}

putchar('\n');

return (0);
}
