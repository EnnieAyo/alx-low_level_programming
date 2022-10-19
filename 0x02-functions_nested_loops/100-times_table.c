#include "main.h"

/**
 * print_times_table - prints times table
 * @n: param
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, hundreds, tens, units, product;

	if (n < 16 || n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				hundreds = product / 100;
				tens = (product % 100) / 10;
				units = (product % 100) % 10;

				if (j == 0)
				{
					_putchar('0');
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(hundreds + '0');
					_putchar(tens + '0');
					_putchar(units + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(tens + '0');
					_putchar(units + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(units + '0');
				}
			}
			_putchar('\n');
		}
	}
}
