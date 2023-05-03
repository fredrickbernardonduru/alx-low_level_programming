#include "lists.h"

/**
 * display_listint - displays all the elements of a linked list
 * @head: linked list of type listint_t to display
 *
 * Return: number of nodes in the linked list
 */
size_t display_listint(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}

	return (count);
}

