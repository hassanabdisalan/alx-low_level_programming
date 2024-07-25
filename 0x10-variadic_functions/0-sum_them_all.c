#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * 
 * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;
char buffer[12];
int len = 0;
int temp = sum;

va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);

if (n == 0)
return 0;

/* Convert sum to string and use _putchar to print */

if (sum < 0)
{
_putchar('-');
temp = -temp;
}

do {
buffer[len++] = (temp % 10) + '0';
temp /= 10;
} while (temp > 0);

/* Print the number in correct order */
while (len > 0)
{
_putchar(buffer[--len]);
}

_putchar('\n');

return sum;
}

