#include "main.h"
/**
* _strlen_recursion - find length of a string
* @s: param
* Return: int
*/
int _strlen_recursion(char *s)
{
int n = 1;

if (*s)
return (n + _strlen_recursion(s + 1));
return (0);
}
