#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Description: This function prints integers using only the _putchar function.
 * It handles negative numbers and zero.
 */
void print_number(int n)
{
	int sign = 1;
	int reversed = 0;
	int remainder;

	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	while (reversed != 0)
	{
		remainder = reversed % 10;
		_putchar('0' + remainder * sign);
		reversed /= 10;
	}
}
