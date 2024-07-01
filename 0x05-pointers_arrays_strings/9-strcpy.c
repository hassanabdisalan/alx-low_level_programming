#include "main.h"

/**
 * _strcpy - copies the string pointed to be src, including the terminating
 * null byte (\0), to the buffer pointed to be dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return (dest);
}
