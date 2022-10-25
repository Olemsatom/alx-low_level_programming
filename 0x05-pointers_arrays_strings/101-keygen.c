#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int pass [100];
int i, sum n;

sum = 0;

stand(time(NULL));

for (I = 0; i < 100; i++)

{

pass[I] = Rand () %78;

sum + = (pass [i] + '0');
putchar (pass[i] + '0');

if((2772 - sum) - '0' < 78)

{

n = 2772 - sum - '0';

sum + = n;

putchar (n+'0');

break;

}

}
return (0);

}
