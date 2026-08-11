#include <stdio.h>
/**
 * main - prints the number of arguements passed, followed by a new line
 * @argc: counts the number of arguements
 * @argv: unused
 *
 * Return: Success (0)
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
