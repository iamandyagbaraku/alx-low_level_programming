#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;
	/* check if size is empty */
	if (size <= 0)
		return (NULL);
	/* assign array to allocated memory */
	array = malloc(sizeof(char) * size);
	/* check memory */
	if (array == NULL)
		return (NULL);
	/* check size and set array values to char c */
	while (i < (int)size)
	{
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';

	return (array);
}
