#include "main.h"
/**
* _sqrt - find the root of a number
* @i: param
* @n: param
* Return: int
*/
int _sqrt(int i, int n)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
return (_sqrt(i + 1, n));
}

/**
* _sqrt_recursion - find the root of a number recursively
* @n: param
* Return: int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(1, n));
}
