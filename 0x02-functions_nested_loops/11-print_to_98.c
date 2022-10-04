#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all from n to 98
 * @n: variables
 * Return: void
 */

void print_to_98(int n)
{
	for (n = n; n < 98; n++)
		printf("%d, ", n);
	for (n = n; n > 98; n--)
		printf("%d, ", n);
	printf("98\n");
}
