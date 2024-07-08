#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to be set
 * @to: pointer to char to set s to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
