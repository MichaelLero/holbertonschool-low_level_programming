#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns sum of all parameter
 * @n: the number of arguments
 *
 * Return: The final sum of all integers added
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int sum;
	va_list args;

	counter = 0;
	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	while (counter < n)
	{
		sum += va_arg(args, int);
		counter++;
	}

	va_end(args);

	return (sum);

}
