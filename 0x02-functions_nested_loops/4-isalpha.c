#include "main.h"

/**
* _isalpha - check if a character is lowercase
* Written by atom
* @c: the character
* Return: 1 if c is alpahabet, 0 if not
*/

int _isalpha(int c)

{

if (c >= 'a' && c <= 'z')

return (0);

else

return (1);

if (c >= 'A' && c <= 'Z')

return (0);

else

return (1);

}
