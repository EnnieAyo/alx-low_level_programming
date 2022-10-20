#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks the case of a letter
 * @c: param
 * Return: void
 */
int _isupper(int c)
{
	int chk;

	chk = isupper(c);
	if (chk > 0)
		return (1);
	else
		return (0);
}
