#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if s is a number, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	if (s[i] == '-')
		i++;
			for (; s[i]; i++)
			{
				if (s[i] < '0' || s[i] > '9')
					return (0);
			}
	return (1);
}

/**
 * _error - prints an error message and exits with status 98
 */
void _error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, j, carry, n1, n2, *result;

	if (argc != 3)
		_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		_error();

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = calloc(len, sizeof(int));
	if (!result)
		_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len && result[i] == 0)
		i++;
	if (i == len)
		putchar('0');
	else
	{
		for (; i < len; i++)
			putchar(result[i] + '0');
	}
	putchar('\n');

	free(result);
	return (0);
}
