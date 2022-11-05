#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of change in cents
 * @argv: arguments
 * @argc: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
int c25;
int c10;
int c5;
int c2;
int c1;
int rem;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
else
{
c25 = atoi(argv[1]) / 25;
rem = atoi(argv[1]) % 25;
c10 = rem / 10;
rem = rem % 10;
c5 = rem / 5;
rem = rem % 5;
c2 = rem / 2;
rem = rem % 2;
c1 = rem;

printf("%d\n", c25 + c10 + c5 + c2 + c1);
}
return (0);
}
