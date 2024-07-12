#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of the character c in s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
