#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: string
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2')
		{
			continue;
		}
		else if (i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
