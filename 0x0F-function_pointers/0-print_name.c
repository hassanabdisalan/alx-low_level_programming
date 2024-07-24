#include <stddef.h>

/**
*print_name - prints a name using the provided function
*@name: the name to print
*@f: pointer to the function to use for printing the name
*
*Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
