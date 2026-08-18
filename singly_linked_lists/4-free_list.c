#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

