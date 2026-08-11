#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 numbers
 * @argc: ensures we don't get more or less than 3 arguements
 * @argv: variables to multiply
 *
 * Return: prints error and returns 1 if it doesn't recieve 2 arguments,
 * otherwise success (0)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;


	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(argv[1]);

	b = atoi(argv[2]);

	c = a * b;

	printf("%d\n", c);

	return (0);
}
