#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t counter;

	counter = 0;
	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		counter++;
		current = current->next;
	}

	return (counter);
}
