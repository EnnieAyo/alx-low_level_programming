#include "main.h"

/**
 * more_numbers - print 0 to 14 10x
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int tens;
	int units;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			tens = j / 10;
			units = j % 10;
			if (j > 9)
			{
				_putchar(tens + 48);
				_putchar(units + 48);
			}
			_putchar('\n');
		}
	}
}
