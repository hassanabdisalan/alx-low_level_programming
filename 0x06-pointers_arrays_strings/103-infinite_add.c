#include "main.h"

/**
 * infinite_add - adds two numbers represented as strings
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
	int carry = 0, sum = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	i--;
	j--;
	size_r--;
	while (i >= 0 || j >= 0 || carry == 1)
	{
		if (i < 0)
			m = 0;
		else
			m = n1[i] - '0';
		if (j < 0)
			n = 0;
		else
			n = n2[j] - '0';
		sum = m + n + carry;
		if (sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (k >= size_r)
			return (0);
		r[k] = (sum % 10) + '0';
		k++;
		i--;
		j--;
	}
	if (k == size_r)
		return (0);
	r[k] = '\0';
	k--;
	for (l = 0; l < k; l++, k--)
	{
		m = r[l];
		r[l] = r[k];
		r[k] = m;
	}
	return (r);
}
