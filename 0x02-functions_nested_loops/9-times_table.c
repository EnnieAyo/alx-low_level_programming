#include "main.h"

/**
 * times_table - prints a 9 x 9 multiplication
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int product;
	int tens;
	int units;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			tens = product / 10;
			units = product % 10;

			if (product == 0)
			{
				_putchar(0);
			}
			else if (product > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(units + '0');
			}

		}
		_putchar('\n');
	}
}
