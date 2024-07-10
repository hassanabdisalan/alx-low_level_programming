#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: The number to calculate the factorial for.
 *
 * Return: the factorial of n. If n is lower than 0,
 * return -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
