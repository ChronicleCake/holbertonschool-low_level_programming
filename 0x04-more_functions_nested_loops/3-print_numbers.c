#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: void
 */

void print_numbers(void)
{
	char ch = '0';

	for (; ch <= '9'; ch++)
		_putchar(ch);
	_putchar('\n');
}
