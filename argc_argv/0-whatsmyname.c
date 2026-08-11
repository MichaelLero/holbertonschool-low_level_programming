#include <stdio.h>

/**
 * main - prints a programs name, followed by a new line
 * @argc: unused
 * @argv: give knowledge on what arguements are present
 *
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
