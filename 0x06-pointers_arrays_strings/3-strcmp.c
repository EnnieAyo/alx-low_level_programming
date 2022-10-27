#include "main.h"
#include <string.h>

/**
 * *_strcmp - a function to copy a string
 * @s1: param
 * @s2: param
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i;
int first = 0;
int second = 0;

for (i = 0; i <= strlen(s1) && s1[i] != '\0'; i++)
{
first = first + (int)s1[i];
}
for (i = 0; i <= strlen(s2) && s2[i] != '\0'; i++)
{
second = second + (int)s2[i];
}
/*printf("first = %d, second = %d\n", first, second);*/
if (first - second < 0)
{
return (-15);
}
else if (first - second > 0)
{
return (15);
}
else
{
return (0);
}
}
