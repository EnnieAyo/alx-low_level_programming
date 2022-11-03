#include "main.h"
/**
 * _memset - a function to set the values in memory
 * @s: param (pointer)
 * @b: param (char)
 * @n: param (unsigned int)
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for ( i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
