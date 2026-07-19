#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10 followed by new
 */

void print_alphabet_x10(void)
{
	int count;
	char letter;

	count = 0;

	while (count < 10)
	{

		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		count++;
	}
}
