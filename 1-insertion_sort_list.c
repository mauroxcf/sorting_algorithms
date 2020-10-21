#include "sort.h"

/**
 * swap_nodes - swaps two nodes positions
 *@list: unsorted list
 *@node_left: left node
 *@node_right: right node
 * Return: void
 */
void swap_nodes(listint_t **list, listint_t *node_left, listint_t *node_right)
{
	listint_t *a, *b, *c, *d;

	a = node_left->prev;
	b = node_left;
	c = node_right;
	d = node_right->next;

	if (a)
		a->next = c;

	c->prev = a;
	c->next = b;
	b->prev = c;
	b->next = d;

	if (d)
		d->prev = b;

	if (*list == b)
		*list = c;
}

/**
 * insertion_sort_list - sorting a double linked list with insertion method
 *
 *@list: unsorted list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *back;

	if (!list || !*list || !((*list)->next))
		return;

	current = *list;

	while (current->next != NULL)
	{
		if (current->n > current->next->n)
		{
			swap_nodes(list, current, current->next);
			current = current->prev;
			print_list(*list);
			back = current;
			while (back->prev != NULL)
			{
				if (back->n < back->prev->n)
				{
					swap_nodes(list, back->prev, back);
					print_list(*list);
					back = back->next;
				}
				else
					break;
				back = back->prev;
			}
		}
		current = current->next;
	}

}
