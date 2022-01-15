#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp = NULL;

	while (current != NULL)
	{
		temp = current->next;
		while (temp != NULL && temp->prev != NULL
				&& (temp->n < temp->prev->n))
		{
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->next->prev;
			temp->next->prev = temp;
		}
		current = current->next;
	}
}
