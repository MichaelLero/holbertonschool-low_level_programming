#include "main.h"
/**
 * more_numbers - prints 10 times the numbers 1 to 14, followed by a new line
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int count;
	int n;
	
	count = 0;
	while (count < 10)
	{
		n = 0;
		while (n <=14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
	
	_putchar('\n');
	count++;
	}
}
