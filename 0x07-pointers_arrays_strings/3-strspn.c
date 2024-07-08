#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accepts
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, match;

	while (*s)
	{
		match = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;
		count++;
		s++;
	}
	return (count);
}
