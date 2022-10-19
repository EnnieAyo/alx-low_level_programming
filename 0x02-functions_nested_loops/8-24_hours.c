#include "main.h"

/**
 * jack_bauer - prints the hours of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hr = 0;
	int min;

	while (hr < 24)
	{
		min = 0;
		_putchar(hr + '0');
		_putchar(':');
		while (min < 24)
		{
			_putchar(min + '0');
		}
	}
}
