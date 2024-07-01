#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for the 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
	char password[7];
	int i;

	srand(time(NULL));

	for (i = 0; i < 6; i++)
	{
		password[i] = 'A' + rand() % 26;
	}
	password[6] = '\0';

	printf("%s", password);

	return (0);
}
