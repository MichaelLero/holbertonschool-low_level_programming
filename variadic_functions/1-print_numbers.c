#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_number - prints an integer
 * @number: integer to print
 *
 * Return: nothing
 */
void print_number(int number)
{
	int digits[10];
	int i;

	i = 0;

	if (number == 0)
	{
		_putchar('0');
		return;
	}

	while (number > 0)
	{
		digits[i] = number % 10;
		number = number / 10;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(digits[i] + '0');
	}

}


/**
 * print_numbers - prints numbers followed by a new line
 * @separator: character separating between numbers
 * @n: number of integers passed in the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	int number;
	va_list args;
	int i;

	counter = 0;
	numbers = 0;

	if (n == 0)
	{
		return;
	}

	va_start(args, n);

	while (counter < n)
	{
		if (counter > 0)
		{
			i = 0;

			while (separator[i] != '\0')
			{
				_putchar(separator[i]);
				i++;
			}
		}

		number = va_arg(args, int);

		print_number(number);

		counter++;
	}

	va_end(args);

	_putchar('\n');

}
