#includes "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alpha;

	while (n < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		n++;
	}
}

