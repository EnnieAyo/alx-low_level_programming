#include "main.h"

/**
 * puts2 - a function to print every other number
 * @str: param
 * Return: void
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
_putchar(str[i]);
else if (i > 0 && i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
