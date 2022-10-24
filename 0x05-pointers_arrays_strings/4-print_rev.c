#include "main.h"
#include <string.h>

/**
 * print_rev - a function to print the reverse of a string
 * @s: param
 * Return: void
 */
void print_rev(char *s)
{
int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
