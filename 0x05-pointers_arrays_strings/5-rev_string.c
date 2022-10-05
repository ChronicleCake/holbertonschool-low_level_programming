#include "main.h"

/**
 * rev_string - reverses the string
 * @s: variable pointing to another string
 * Return: void
 */

void rev_string(char *s)
{
	int rev;
	int len;

	while (s[len])
	{
		len++;
		_putchar(s[len]);
	}
	len--;
	while (rev == len)
	{
		rev--;
		_putchar(s[rev]);
	}
	_putchar('\n');
}
