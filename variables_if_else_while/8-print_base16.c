#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
