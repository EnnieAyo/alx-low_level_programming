#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	do {
		putchar(ch);
		ch--;
	} while (ch >= 'a');

	putchar('\n');
	return (0);
}
