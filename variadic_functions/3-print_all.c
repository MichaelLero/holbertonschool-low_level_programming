#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: can be c, i, f or s
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{

	const char *p;
	va_list args;
	const char *s;
	const char *separator;

	separator = "";

	p = format;

	va_start(args, format);

	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				printf("%s", separator);
				_putchar(va_arg(args, int));
				separator = ", ";
				break;
			
			case 'i':
				printf("%s", separator);
				printf("%d", va_arg(args, int));
				separator = ", ";
				break;
			
			case 'f':
				printf("%s", separator);
				printf("%f", va_arg(args, double));
				separator = ", ";
				break;
			
			case 's':
				printf("%s", separator);
				s = va_arg(args, char *);

				if (s == NULL)
				{
					s = "(nil)";
				}

				printf("%s", s);
				separator = ", ";
				break;

		}

		p++;
	}

	va_end(args);
	_putchar('\n');
}
