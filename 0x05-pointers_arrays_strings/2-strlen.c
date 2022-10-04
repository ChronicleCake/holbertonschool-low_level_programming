#include "main.h"

/**
 * _strlen - prints the string length
 * @s: character variable
 * Return: leng
 */

int _strlen(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}
