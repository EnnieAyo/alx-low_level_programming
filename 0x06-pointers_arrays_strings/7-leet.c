#include "main.h"

/**
 * *leet - a function to write leet
 * @s: param
 * Return: char
 */
char *leet(char *s)
{
char srh[] = "aAeEoOtTlL";
char rpl[] = "4433007711";
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; srh[j] != '\0'; j++)
{
if (s[i] == srh[j])
s[i] = rpl[j];
}
}
return (s);
}
