#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The number of bytes to be concatenated from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
