#include "main.h"
 /**
* jack_bauer - prints every minute of the day
* Description: prints every minute of the day
* Return: void
*/
void jack_bauer(void)
{

int hour;
int minutes;

for (hour = 0; hour < 24; hour++)

{


for (minutes = 0; minutes < 60; minutes++)

{

_putchar(hours / 10 + '0');
_putchar(hours % 10 + '0');
_putchar(':');
_putchar(minutes / 10 + '0');
_putchar(minutes % 10 + '0');
_putchar('\n');

}

}

}
