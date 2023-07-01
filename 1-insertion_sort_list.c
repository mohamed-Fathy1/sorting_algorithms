#include "sort.h"


/**
 * insertion_sort_list - function
 * @list: input
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i && i->prev; i = i->next)
	{
		listint_t *cur = i;

		for (j = i; j && j->prev && (i->prev->n > i->n); j = j->prev)
		{
			listint_t *next = cur->next;
			listint_t *prev = cur->prev;

			prev->next = next;
			if (next)
				next->prev = prev;

			if (prev->prev)
				prev->prev->next = cur;
			else
				*list = cur;

			if (prev)
			{
				cur->prev = prev->prev;
				prev->prev = cur;
			}

			cur->next = prev;
			print_list(*list);
			j = j->next;
		}
	}
}
