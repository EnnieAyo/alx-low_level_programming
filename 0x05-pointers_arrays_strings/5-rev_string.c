#include "main.h"
#include <string.h>

/**
 * rev_string - a function to print the reverse of a string
 * @s: param
 * Return: void
 */
void rev_string(char *s)
{
int n = strlen(s);
char hold[sizeof(s)];
int i;

	for (i = 0; i <= (int) strlen(s); i++)
	{
		hold[i] = s[i];
	}

	for (i = (int) strlen(s) + 1; i >= 0; i--)
	{
		*(s + i) = hold[strlen(hold) - 1 - i];
	}
	n = n + 1;
}