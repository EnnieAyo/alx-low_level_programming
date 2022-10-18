#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last
 * @n: param
 * Return: int
 */

int print_last_digit(int n)
{
	int m;

	m = abs(n % 10);
	_putchar(m + '0');
	return (m);
}
