#include "main.h"
/**
 * more_numbers - Entry point
 * Return: Always void
 */

void more_numbers(void)
{
	int ch;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
			{
				_putchar(ch / 10 + '0');
			}
			_putchar(ch % 10 + '0');
		}
		_putchar('\n');
	}
}
