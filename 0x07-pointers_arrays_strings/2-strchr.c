#include "main.h"
/**
 * _strchr - a function to search a string
 * @s: param (pointer)
 * @c: param (char)
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i;
char *n;

for (i = 0; s[i] >= '\0'; i++)
{
if (*(s + i) == c)
{
n = s + i;
break;
}
else
n = 0;
}
return (n);
}
