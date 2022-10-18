#include "main.h"
#include <ctype.h>

/**
 * _islower - checks the case of a letter
 * @c: letter to be checked
 * Return: 1 lowercase 0 otherwise
 */
int _islower(int c)
{
	int chk;
	int res;

	chk = islower(c);
	if (chk > 0)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
