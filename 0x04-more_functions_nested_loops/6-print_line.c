#include "main.h"

/**
 * print_line - prints lines according to n
 * @n: variables
 * Return: void
 */

void print_line(int n)
{
	int ch;

	for (ch = 1; ch <= n; ch++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
