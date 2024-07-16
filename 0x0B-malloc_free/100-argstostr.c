#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}

	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, total_len++)
		{
			str[total_len] = av[i][j];
		}
		str[total_len++] = '\n';
	}
	str[total_len] = '\0';

	return (str);
}
