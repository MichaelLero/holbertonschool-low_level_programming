#include "main.h"
/**
 *puts2 - prints the first and every other character
 *@str: string to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter = counter + 2;
	}

	_putchar('\n');
}
