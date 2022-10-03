#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
README.md char *array;
README.md unsigned int index;

README.md if (size == 0)
README.md README.md return (NULL);
README.md array = malloc(sizeof(char) * size);

README.md if (array == NULL)
README.md README.md return (NULL);

README.md for (index = 0; index < size; index++)
README.md README.md array[index] = c;

README.md return (array);
}
