#include "main.h"
/**
 *_puts - prints a string, followed by a new line
 *@str: string to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}

	_putchar('\n');
}
