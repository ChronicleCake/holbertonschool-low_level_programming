#include "main.h"

/**
 * puts_half - we are planning on putting only the latter of the string
 * @str: will refrence this sting in another file
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int ch;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		ch = (i - 1) / 2;
		ch += 1;
	}
	else
	{
		ch = i / 2;
	}
	for (; ch < i; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}

