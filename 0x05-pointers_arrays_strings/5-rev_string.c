#include "main.h"

/**
 * rev_string - reverse points to a string
 * @s: refrencing a previous srting
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, len;
	char *a, rev;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (len = 1; len < c; len++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		rev = s[i];
		s[i] = *a;
		*a = rev;
		a--;
	}
}

