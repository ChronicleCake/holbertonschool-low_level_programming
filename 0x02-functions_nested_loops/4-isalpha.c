#include "main.h"
/**
 * _isalhpa - to check for alphabetic character
 * @c: variables for alpha
 *
 * Return: c if letter; 0 if otherwise
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
