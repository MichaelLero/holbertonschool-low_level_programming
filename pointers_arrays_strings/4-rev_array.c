#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: array of values
 * @n: number of values
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
