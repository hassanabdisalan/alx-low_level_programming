#include "main.h"

/**
 * _strpbrk - searches for a set of bytes.
 * @s: target string.
 * @accept: subject of refference
 * Return: poiner to s or Null if unfatched
*/

char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}
	return (NULL);
}
