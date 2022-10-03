#include "main.h"

/**
 * times_table - producess a times table
 *
 * Retrun: void
 */

void times_table(void)
{
	int r = 0, c = 0, multi;

	for (; r <= 9; r++)
	{
		_putchar('0');
		for (c = 1; c <= 9; c++)
		{
			multi = r * c;
			if (multi < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi % 10 + '0');
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar(10);
	}

}
