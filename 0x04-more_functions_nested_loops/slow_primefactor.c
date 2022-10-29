#include <stdio.h>

/**
 * isprime - checks if prime number
 * @n: input integer.
 * Return: integer.
 */
unsigned long int isprime(unsigned long int n)
{
unsigned long int i;
int flag = 1;

if (n > 1)
{
for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
flag = 0;
}
if (flag == 1)
/*n is a prime number*/
return (1);
else
/*n is not a prime number*/
return (0);
}
else
return (0);
}

/**
 * isgreatestprimefactor - checks if prime factor
 * @n: input integer.
 * Return: integer.
 */
unsigned long int isgreatestprimefactor(unsigned long int n)
{
unsigned long int j;
unsigned long int grt = 0;

for (j = 1; j < n; j++)
{
if (n % j == 0)
{
if (isprime(j))
{
if (j >= grt)
grt = j;
}
}
}
return (grt);
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n = 612852475143;
unsigned long int m = isgreatestprimefactor(n);
printf("%lu\n", m);

return (0);
}
