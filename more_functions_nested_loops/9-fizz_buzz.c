#include <stdio.h>
/**
 * main - counts up to 100 changing some numbers with words
 *
 * Return: always 0
 */
int main(void)
{
	int counter;

	counter = 1;

	while (counter <= 100)
	{
		if (counter > 1)
		{
			printf(" ");
		}

		if (counter % 3 == 0 && counter % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (counter % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (counter % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", counter);
		}

		counter++;
	}

	printf("\n");

	return (0);
}
