#include "function_pointers.h"

/**
* print_name - print a name from a function header
* @name: char string
* @f: function pointer that takes a string argument
*/

void print_name(char *name, void (*f)(char *))

{

f(name);

}
