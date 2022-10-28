include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * **string_toupper - a function to uppercase of a string
 * @s: param
 * Return: char
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
s[i] = toupper(s[i]);
}
return (s);
}
