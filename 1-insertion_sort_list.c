#include "sort.h"
/**
 * insertion_sort_list - Sorts a double linked list
 * @list: Array of pointers to nodes
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if ((*list)->next)
		current = (*list)->next;
	while (current)
	{
		printf("Evaluo %i < %i\n", current->n, current->prev->n);
		if (current->n < current->prev->n)
		{
			printf("Estoy parado en el %i\n", current->n);
			current->next->prev = current->prev;
			current->prev->next = current->next;
			
			if (current->prev->prev && current->next->next)
			{
				current->next = current->prev;
				current->prev = current->next->prev;

				current->prev->next = current;
			} else if (!current->prev->prev)
			{
				current->prev->prev = current;
				current->next = current->prev;
				current->prev = NULL;
			}

			current->next->prev = current;
		
			current = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}

