#include "main.h"

/**
 * swap_int - swaps an integer
 * @a: variables
 * @b: variables
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	(swap = *a);
	(*a = *b);
	(*b = swap);
}
