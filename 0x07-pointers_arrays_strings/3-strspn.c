#include "main.h"
/**
 * _strspn - a function to search a string
 * @s: param
 * @accept: param
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int cnt = 0;
int flag;

for (i = 0; s[i] != '\0'; i++)
{
	flag = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			cnt++;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	break;
}
	return (cnt);
}
