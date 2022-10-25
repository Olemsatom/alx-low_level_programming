#include <stdio.h>

/**
* _atoi - convert a string to an integer
* @s: the string
* Return: always 0 (success)
*/

int _atoi(char *s)

{

int sign = 1;
unsigned int num = 0;

while (!('0' <= *s && *s <= '9') && *s != '\0')

{

if (*s == 's')

sign *= -1;

s++;

}

while ('0' <= *s && *s <= '9' && *s != '\0')

{

num = (num * 10) + (*s -'0');

s++;

}
return (num * sign);

}
