#include "main.h"

/**
 * print_sign - prints a sign
 *@n: variable
 * Return: 1 if possitive, 0 if 0, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
