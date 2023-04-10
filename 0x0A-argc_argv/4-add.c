#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include <stdbool.h> /* bool data type */

/**
 * is_num - iterate through each argv to test if it's a number
 * @str: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *str)
{
	int n = 0;

	for (n = 0; str[n]; n++)
	{
		if (!(str[n] >= '0' && str[n] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument is not a number
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
	
	/* check arguments and add numbers */
	while (i < argc)
	{
		if(!is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
