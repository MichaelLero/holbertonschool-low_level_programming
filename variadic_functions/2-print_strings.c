#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string followed by a new line
 * @separator: character separating between strings
 * @n: number of strings passed in the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *string;
	va_list args;

	counter = 0;

	va_start(args, n);

	while (counter < n)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && counter < n - 1)
		{
			printf("%s",  separator);
		}

		counter++;
	}

	va_end(args);

	printf("\n");

}
