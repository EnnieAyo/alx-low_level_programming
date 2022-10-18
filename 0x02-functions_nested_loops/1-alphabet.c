#include "main.h"
#include "_putchar.h"

/**
 * print_alphabet - entry point
 * Return: char
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
