#include "main.h"

/**
 * print_last_digit - prints the last digit
 *@n: variables
 * Return: n
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10);

	if (lastDigit < 0)
	{
		lastDigit = (-1 * lastDigit);
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
