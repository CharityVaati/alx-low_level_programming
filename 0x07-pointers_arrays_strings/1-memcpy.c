#include "main.h"
/**
*_memcpy - The _memcpy() function copies n bytes
* from memory area src to memory area dest
*@dest:area where bytes are copied to
*@src:area where bytes are copied from
*@n:number of bytes to copy
*Return: returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
0-memset.c unsigned int i = 0;

0-memset.c for (; i < n; i++)
0-memset.c 0-memset.c dest[i] = src[i];

0-memset.c return (dest);
}
