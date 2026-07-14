#include "main.h"
/**
 * puts_half - Prints 2nd half of a string, followed by new line
 * @str: string to half
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int counter;
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	counter = (length + 1) / 2;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}

	_putchar('\n');
}
