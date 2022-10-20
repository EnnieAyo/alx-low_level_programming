#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: param
 * Return: int
 */
int _isdigit(int c)
{
	int chk;

	chk = isdigit(c);
	if (chk > 0)
		return (1);
	else
		return (0);
}
