#include "main.h"

/**
 * *rot13 - a function to write ROT13
 * @s: param
 * Return: char
 */
char *rot13(char *s)
{
char srh[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rpl[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; srh[j] != '\0'; j++)
{
if (s[i] == srh[j])
{
s[i] = rpl[j];
break;
}
}
}
return (s);
}
