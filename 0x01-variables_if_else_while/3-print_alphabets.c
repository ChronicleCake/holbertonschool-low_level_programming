#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int i = 65;

	for (; ch <= 'z'; ch++)
		putchar(ch);
	for (; i <= 90; i++)
		putchar(i);
	putchar('\n');
return (0);
}
