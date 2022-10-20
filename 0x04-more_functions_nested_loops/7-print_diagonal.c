#include "main.h"
/**
 * print_diagonal -print diagonal
 * @n: param
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		if (i > 1)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n';
		}
	}
}
