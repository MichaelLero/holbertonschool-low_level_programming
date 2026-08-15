#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current;
	int counter;

	current = h;
	counter = 0;

	while (h != NULL)
	{
		if (current->str == NULL)
		{
			print("[0] (nil)\n");
		}

		else
		{
			printf("[%u} %s\n", current->len, current->str);
		}

		counter++;
		current = current->next;
	}

	return (counter);
}
