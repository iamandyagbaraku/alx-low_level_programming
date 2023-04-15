#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++;

	conct = malloc(sizeof(char) * (len1 + len2));

	if (conct == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(conct + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(conct + i) = *(s2 + j);
		i++, j++;
	}

	return (conct);
}
