#include "main.h"

/**
 * _isdigit - prints a digit
 * @c: variable
 * Return: 1 if c, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
