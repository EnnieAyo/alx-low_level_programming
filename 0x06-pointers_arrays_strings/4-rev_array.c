#include "main.h"

/**
 * *reverse_array - a function to reverse an int array
 * @a: param
 * @n: param
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int hold[100];

i = 0;
while (i < n)
{
hold[i] = a[i];
i++;
}
i = 0;
while (i < n)
{
a[i] = hold[n - 1 - i];
i++;
}
}
