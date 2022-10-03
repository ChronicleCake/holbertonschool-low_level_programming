#include "main.h"
/* this script checks for upper or lowercase alpha*/

/**
 * _isalhpa - to check for an alphabetic character
 * @c: variables for alpha
 *
 * Return: 1 if letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
