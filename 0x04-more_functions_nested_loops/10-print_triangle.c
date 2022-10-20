#include "main.h"

/**
 * print_triangle -  a function that prints a triangle
 * @size: param
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i;
	int j;
	int cnt = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
	{
		if (j < cnt)
		_putchar(' ');
		else
		_putchar('#');
	}
	cnt--;
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
