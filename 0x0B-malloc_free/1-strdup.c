#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which is a duplicate of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *ds;
	int i = 0;
	int len = 0;

	/* check str input */
	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;
	ds = malloc(sizeof(char) * len);
	if (ds == NULL)
		return (NULL);

	i = 0;
	while (len > i)
	{
		*(ds + i) = *(str + i);
		i++;
	}

	return (ds);
}
