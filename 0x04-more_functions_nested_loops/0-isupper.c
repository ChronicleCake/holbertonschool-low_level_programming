#include "main.h"
/**
 * _isupper - this script check for uppercase
 * @c: variable
 *
 * Return: (1) is uppercase, otherwise (0)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
