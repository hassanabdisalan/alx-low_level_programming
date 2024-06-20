#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints "and that piece of art is useful" - Dora
 * Korpar, 2015-10-19" to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
