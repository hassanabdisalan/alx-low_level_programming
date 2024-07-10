#include "main.h"

int square_root_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The natural square root of n. If n does not have a natural
 * square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root_helper(n, 0));
}
/**
 * square_root_helper - helper funtion to find the square root.
 * @n: The number to calculate the square rot for.
 * @i: the current number to test as the square root.
 *
 * Return: The natural square root of n, or -1 if none found;
 */
int square_root_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
		return (square_root_helper(n, i + 1));
}
