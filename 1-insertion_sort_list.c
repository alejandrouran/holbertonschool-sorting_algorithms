#include "sort.h"

/**
 * insertion_sort_list - doubly linked list of integers in ascending order
 * @list: linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *nxt;

	if (list == NULL || *list == NULL)
		return;
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		nxt = tmp->next;
		while (tmp->prev != NULL && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->next->prev;
			tmp->next->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
		tmp = nxt;
	}
}
