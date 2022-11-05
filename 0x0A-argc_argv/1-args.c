#include <stdio.h>
/**
 * main - prints the no of args passed
 * @argv: arguments
 * @argc: arguments
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
