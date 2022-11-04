#include "main.h"
/**
* is_prime - check if prime recursively
* @x: param
* @n: param
* Return: int
*/
int is_prime(int x, int n)
{

if (n % x == 0)
	return (0);
	if (x == n / 2)
		return (1);
	return (is_prime(x + 1, n));
}
/**
* is_prime_number - check if prime
* @n: param
* Return: int
*/
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (is_prime(2, n));
}
