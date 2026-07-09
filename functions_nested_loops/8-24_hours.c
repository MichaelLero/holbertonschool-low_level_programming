#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour_tens;
	int hour_ones;
	int min_tens;
	int min_ones;

	hour_tens = 0;

	while (hour_tens <= 2)
	{
		hour_ones = 0;

		while (hour_ones <= 9)
		{
			mins_tens = 0;

			while (min_tens <= 5)
			{
				min_ones = 0;

				while (min_ones <= 9)
				{
					_putchar(hour_tens + '0');
					_putchar(hour_ones + '0');
					_putchar(':');
					_putchar(min_tens + '0');
					_putchar(min_ones + '0');
					_putchar('\n');

					min_ones++;
				}

				min_tens++;
			}

			hour_ones++;
		}

		hour_tens++
	}
}
