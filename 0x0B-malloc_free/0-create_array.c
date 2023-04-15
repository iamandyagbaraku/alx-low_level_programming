#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size <= 0) /* check size input */
		return (NULL);
	array = malloc(sizeof(char) * size); /* allocate memory */

	if (array == NULL) /* check memory */
		return (NULL);

	while (i < (int)size) /* check size and set array values to char c */
	{
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';

	return (array);
}
