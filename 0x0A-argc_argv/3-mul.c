#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, Print error and return 1 if arguments passes isn't 2
 */

int main(int argc, char **argv)
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
