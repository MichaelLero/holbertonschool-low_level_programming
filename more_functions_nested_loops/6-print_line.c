#include "main.h"
/**
 * print_line - Prints _ the number of times inputted
 * @n: amount of times we want _ printed
 *
 * Return: Nothing
 */i
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
