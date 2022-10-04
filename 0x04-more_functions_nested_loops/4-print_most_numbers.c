#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * Return: void
 */

void print_most_numbers(void)
{
	char ch = '0';

	for (; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
		{
			continue;
		}
		_putchar(ch);
	}
	_putchar('\n');
}
