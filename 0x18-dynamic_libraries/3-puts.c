#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 *@str:  parameter function
 * Return: 0
 */
void _puts(char *s)
{
	while(*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
