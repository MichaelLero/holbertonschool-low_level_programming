#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t counter;

	current = h;
	counter = 0;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
