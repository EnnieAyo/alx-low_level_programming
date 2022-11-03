#include "main.h"
/**
 * _memcpy - a function to set the values in memory
 * @dest: param (pointer)
 * @src: param (char)
 * @n: param (unsigned int)
 * Return: char
 */
 char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
