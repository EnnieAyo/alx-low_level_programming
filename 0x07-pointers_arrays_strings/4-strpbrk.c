#include "main.h"
/**
 * _strpbrk - a function to search a string
 * @s: param
 * @accept: param
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
char *p;
int flag = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
flag = 1;
p = s + i;
break;
}
}
if (flag != 1)
{
p = 0;
}
else
break;
}
return (p);
}
