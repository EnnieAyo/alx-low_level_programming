#include "main.h"
#include <string.h>

/**
 * *_strncpy - a function to copy a string
 * @dest: param
 * @src: param
 * @n: param
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

        for (i = 0; i <= (int) strlen(src) && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
	return (dest);
}
