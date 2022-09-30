#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar";
	int ch;

	for (ch = 0; s[ch]; ch++)
		_putchar(s[ch]);
	_putchar('\n');
return (0);
}
