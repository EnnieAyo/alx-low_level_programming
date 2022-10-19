#include "main.h"

/**
 * print_to_98 - print natural numbers
 * @n: param
 * Return: void
 */
void print_to_98(int n)
{
	int tens;
	int units;
	int cnt;

	while (n <= 98)
	{
		tens = n / 10;
		units = n % 10;

		if (n == 0)
		{
			_putchar('0');
		}
		else if (n > 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(tens);
			_putchar(units);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(units);
		}
		_putchar('\n');
	}
}
