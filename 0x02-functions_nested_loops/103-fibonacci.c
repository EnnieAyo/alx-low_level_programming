#include <stdio.h>

/**
 * main - prints sum of the even number in fib series
 * Return: void
 */
int main(void)
{
	int one = 1;
	int two = 2;
	long int next;
	long int hold;
	long int prev;
	long int i;
	long int sum = 0;

	for (i = 0; next <= 4000000; i++)
	{
		if (i == 0)
		{
			next = one + two;
			prev = two;
			sum = two;
		}
		else
		{
			hold = next;
			next = prev + next;
			prev = hold;
			if (next % 2 == 0)
			sum = sum + next;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
