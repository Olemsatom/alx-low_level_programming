/**
* _strlen - returns the length of a function
* @s: char input
*
* Return: length of function
*/

int _strlen(char *s)

{

int i = 1, sum = 0;

char pl = s[0];

while (pl != '\0')

{

sum++;

pl = s[i++];

}

return (sum);
}
