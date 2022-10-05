#include "main.h"

/**
 * puts2 - will print both
 * @str: will refrence a string from another file
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, ch;

	while (str[i] != '\0')
	{
		i++;
	}
	for (ch = 0; ch < i; ch += 2)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}
