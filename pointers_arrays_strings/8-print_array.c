#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints array of numbers by n amount of times.
 * @a: Array of numbers
 * @n: How many numbers to print
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int counter;

	counter = 0;

	while (counter < n)
	{
		printf("%d", a[counter]);

		if (counter < n - 1)
		{
			printf(", ");
		}

		counter++;
	}
	printf("\n");
}
