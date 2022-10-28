#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a print
 * @str: param
 * Return: void
 */
void puts_half(char *str)
{
int n = strlen(str);
int i;

if (n % 2 == 0)
n /= 2;
else
n = (n - 1) / 2;

for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
