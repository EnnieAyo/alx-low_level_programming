#include <stdio.h>

/**
 * main - prints the 1st 50 fib series
 * Return: void
 */
int main(void)
{
	int one = 1;
	int two = 2;
	int next;
	int hold;
	int prev;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			next = one + two;
			prev = two;
			printf("1, 2");
		}
		else
		{
			hold = next;
			next = prev + next;
			prev = hold;
			printf(", %d", next);
		}
	}
	printf("\n");
	return (0);
}
