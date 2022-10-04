#include "main.h"

/**
 * print_rev - main entry point
 * @s: variables
 * Return: void
 */

void print_rev(char *s)
{
	int rev;
	int len = 0;

	while (s[len])
		len++;
	len--;
	for (rev = len; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
