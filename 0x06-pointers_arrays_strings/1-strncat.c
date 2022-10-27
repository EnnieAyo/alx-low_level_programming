#include "main.h"
#include <string.h>

/**
 * char *_strncat - a function to print the reverse of a string
 * @dest: param (destination)
 * @src: param (source)
 * @n: param (size)
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
