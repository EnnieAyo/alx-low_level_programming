#include <stdio.h>

/**
 * main - prints the 1st 50 fib series
 * Return: void
 */
int main(void)
{
	int one = 1;
	int two = 2;
	long int next;
	long int hold;
	long int prev;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			next = one + two;
			prev = two;
			printf("1, 2, %ld", next);
		}
		else
		{
			hold = next;
			next = prev + next;
			prev = hold;
			printf(", %ld", next);
		}
	}
	printf("\n");
	return (0);
}
