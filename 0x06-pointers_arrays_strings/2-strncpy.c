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
strncpy(dest,src,n);
return(dest);
}
