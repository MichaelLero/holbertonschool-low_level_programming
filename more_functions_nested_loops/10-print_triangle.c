#include "main.h"
/**
 * print_triangle - prints a triangle using #, followed by a new line
 * @size: size of triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int spaces;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 1;
	while (row <= size)
	{
		(spaces = size - row);
	}

	while (spaces > 0)
	{
		_putchar(' ');
		spaces--;
	}

	hashes = 0;

	while (hashes < row)
	{
		_putchar('#');
		hashes++;
	}

		_putchar('\n');
		row++;
	}
}
