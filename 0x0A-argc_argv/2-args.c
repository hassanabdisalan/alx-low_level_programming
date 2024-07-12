#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments (including the program name)
 * @argv: An array of strings containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
