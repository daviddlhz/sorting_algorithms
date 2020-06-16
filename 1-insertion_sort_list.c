#include "sort.h"

/**
 *insertion_sort_list - function that sort a content of double linked list
 *@list: is a double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list)
	{
		return;

	}
	current = (*list)->next;

	while (current != NULL)
	{
		tmp = current->next;

		while (current->prev && current->n < current->prev->n)
		{
			current->prev->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = current->prev;

			}

			current->next = current->prev;
			current->prev = current->next->prev;

			if (current->prev != NULL)
			{
				current->prev->next = current;
			}
			else
			{
				*list = current;
			}
			current->next->prev = current;
			print_list(*list);

		}
		current = tmp;
	}
}
