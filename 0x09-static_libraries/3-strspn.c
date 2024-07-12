#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - Calculates the length of the initial segment of s
 *           which consists entirely of characters in accept.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The length of the initial segment of s consisting
 *         only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
