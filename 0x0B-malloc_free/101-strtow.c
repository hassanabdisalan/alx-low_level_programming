#include "main.h"
#include <stdlib.h>

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] && str[i] == ' ')
			i++;
		start = i;
		while (str[i] && str[i] != ' ')
			i++;
		end = i;

		len = end - start;
		words[k] = malloc(sizeof(char) * (len + 1));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; start < end; start++, j++)
			words[k][j] = str[start];
		words[k][j] = '\0';
	}
	words[k] = NULL;

	return (words);
}
