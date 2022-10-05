#include "main.h"

/**
 * rev_string - reverses the string
 * @s: variable pointing to another string
 * Return: void
 */

void rev_string(char *s)
{
	int rev, len, i;
	char *ch, c;

	ch = s;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 1; i < len; i++)
	{
		ch++;
	}
	for (rev = 0; rev < (c / 2); rev++)
	{
		c = s[rev];
		s[rev] = *ch;
		*ch = c;
		ch--;
	}
	_putchar('\n');
}
