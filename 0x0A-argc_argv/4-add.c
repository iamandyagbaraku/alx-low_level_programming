#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include <stdbool.h> /* bool data type */

/**
 * is_num - iterate through each string if it's a number
 * @str: strig
 * Return: true only if entire string is a number, and false if it is not
 */

bool is_num(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all strings if they are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument isn't a number
 */

int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* check all arguments to add numbers */
	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
