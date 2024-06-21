#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
