#include "main.h"
/**
 *_puts -
 *@str:
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
