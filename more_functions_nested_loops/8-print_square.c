#include "main.h"
/**
 * print_square - Function prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n')
	}

	row = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
