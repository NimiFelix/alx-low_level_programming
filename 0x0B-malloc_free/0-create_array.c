#include "main.h"

/**
 * create_array - creates an arrays of chars and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: character to insert
 * Return: NULL if size is zero or if it fails,
 * pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
