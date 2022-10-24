#include "main.h"

/**
 * swap_int -  a function that swaps the value
 * of 2 integers
 * @a: param
 * @b: param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
