#include "main.h"
/**
 * print_rev - prints a string in reverse, followed new line
 * @s: string to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	counter--;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}

	_putchar('\n');
}
