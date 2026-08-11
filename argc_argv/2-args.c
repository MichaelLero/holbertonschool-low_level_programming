#include <stdio.h>
/**
 * main - prints all arguements
 * @argc: counts the number of arguements
 * @argv: arguements to print
 *
 * Return: Success (0)
 *
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
