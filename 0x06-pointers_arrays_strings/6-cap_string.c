#include "main.h"
#include <ctype.h>

/**
 * *cap_string - a function to uppercase of a word's 1st letter
 * @s: param
 * Return: char
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (i == 0)
s[i] = toupper(s[i]);
else if (s[i - 1] == ' ')
s[i] = toupper(s[i]);
else if (s[i - 1] == '\n')
s[i] = toupper(s[i]);
else if (s[i - 1] == '\t')
s[i] = toupper(s[i]);
else if (s[i - 1] == ',')
s[i] = toupper(s[i]);
else if (s[i - 1] == ';')
s[i] = toupper(s[i]);
else if (s[i - 1] == '.')
s[i] = toupper(s[i]);
else if (s[i - 1] == '!')
s[i] = toupper(s[i]);
else if (s[i - 1] == '?')
s[i] = toupper(s[i]);
else if (s[i - 1] == '"')
s[i] = toupper(s[i]);
else if (s[i - 1] == '(')
s[i] = toupper(s[i]);
else if (s[i - 1] == ')')
s[i] = toupper(s[i]);
else if (s[i - 1] == '}')
s[i] = toupper(s[i]);
else if (s[i - 1] == '{')
s[i] = toupper(s[i]);
}
}
return (s);
}
