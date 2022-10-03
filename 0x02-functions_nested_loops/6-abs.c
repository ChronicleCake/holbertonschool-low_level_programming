#include "main.h"

/**
 * _abs - the absolute value
 *@n: variables
 * Return: Always 0 (Success)
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
