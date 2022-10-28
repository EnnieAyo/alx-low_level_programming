#include "main.h"

/**
 * _strcpy - a function to copy an array
 * @src: param
 * @dest: param
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
