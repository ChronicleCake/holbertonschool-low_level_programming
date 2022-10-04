#include "main.h"
/**
 * more_numbers - Entry point
 * Return: Always void
 */

void more_numbers(void)
{
	int i = 0;
	char ch = '0';

	for (i = 0; i <= 9; i++)
	{
		for (ch = 0; ch <= 20; ch++)
		{
			_putchar(ch);
			if (ch >= 10 || ch <= 15)
			{
				continue;
			}
		}
	_putchar('\n');
	}
}
