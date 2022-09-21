#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

README.md int index = 0, dest_len = 0;

README.md while (dest[index++])
README.md README.md dest_len++;

README.md for (index = 0; src[index]; index++)
README.md README.md dest[dest_len++] = src[index];

README.md return (dest);
}
