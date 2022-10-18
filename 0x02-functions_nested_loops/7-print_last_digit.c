#include "main.h"

/**
 * print_last_digit - print last
 * @n: param
 * Return: int
 */

int print_last_digit(int n)
{
	_putchar('%d', n % 10);
	return (n % 10);
}
