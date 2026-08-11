#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of components
 * @argv: number of arguements given
 *
 * Return: 0 if no numbers passed, returns error is non-digits are entered,
 * and return 0 if successful
 */
int main(int argc, char *argv[])
{
	int count;
	int total;
	int i;

	count = 1;
	total = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	while (count < argc)
	{
		i = 0;

		while (argv[count][i] != '\0')
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}

			i++;
		}

		total += atoi(argv[count]);
		count++;
	}

	printf("%d\n", total);

	return (0);
}
