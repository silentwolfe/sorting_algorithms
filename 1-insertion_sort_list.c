#include "sort.h"

/**
 * node_swap - The function performs swapping using doubly linkedlist
 * @head: The pointer to head node.
 * @node1: The pointer to the first swapped node.
 * @node2: The second node pointer.
 */
void node_swap(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;

	if (node2->next != NULL)
	{
		node2->nextprev = *node1;
	}

	node2->prev = (*node1)->prev;
	node2->next = *node1;

	if ((*node1)->prev != NULL)
	{
		(*node1)->prev->next = node2;
	}
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}



/**
 * insertion_sort_list - The function handles sorting of the list
 * @list: The pointer to the doubly linked list head
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insertion, *temp, *iterate;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (iterate = (*list)->next; iterate != NULL; iterate = temp)
	{
		temp = iterate->next;
		insertion = iterate->prev;
		while (insertion != NULL && iterate->n < insertion->n)
		{
			node_swap(list, &insert, iterate);
			print_list((const listint_t *)*list);
		}
	}
}
