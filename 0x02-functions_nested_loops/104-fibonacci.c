#include <stdio.h>

/**
 * main - prints the 1st 50 fib series
 * Return: void
 */
int main(void)
{
	int one = 1;
	int two = 2;
	unsigned long next;
	unsigned long hold;
	unsigned long prev;
	int i;

	for (i = 0; i < 96; i++)
	{
		if (i == 0)
		{
			next = one + two;
			prev = two;
			printf("1, 2, %lu", next);
		}
		else
		{
			hold = next;
			next = prev + next;
			prev = hold;
			printf(", %lu", next);
		}
	}
	printf("\n");
	return (0);
}
