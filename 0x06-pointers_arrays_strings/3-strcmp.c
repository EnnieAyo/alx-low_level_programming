#include "main.h"
#include <string.h>

/**
 * *_strcmp - a function to copy a string
 * @s1: param
 * @s2: param
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int cnt = 0;

	for (i = 0; i <= (int) strlen(s1) && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] == s2[i])
	{
		continue;
	}
	else
	{
		cnt = i;
		break;
	}
	}
	return (s1[cnt] - s2[cnt]);
}
