#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing the characters to search for.
 *
 * Return: Pointer to the first occurrence in s of any character in accept,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
