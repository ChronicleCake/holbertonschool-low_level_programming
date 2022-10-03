#include "main.h"
/**
 * _islower - this script check for lowercase
 * @c: variable
 *
 * Return: (1) is lowercase else (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
