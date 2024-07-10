#include "main.h"

int prime_helper(int n, int i);

/**
 * is_prime_number - Returns 1 if the input interger is a prime number,
 * otherwsie returns 0.
 * @n: the number to check for primality.
 *
 * Return: 1 if the number is orime, otherwsie 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_helper(n, 2));

}
/**
 * prime_helper - Helper function to check for prime number
 * @n: The number to check for primality.
 * @i: the current divisor to test.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_helper(n, i + 1));
	}
}
