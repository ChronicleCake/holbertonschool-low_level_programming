#include "main.h"

/**
 * print_diagonal - entry point
 * @n: variable
 * Return: void
 */

void print_diagonal(int n)
{
	int ch;
	int l;

	while (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (ch = 1; ch <= n; ch++)
	{
		for (l = 1; l < ch; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
