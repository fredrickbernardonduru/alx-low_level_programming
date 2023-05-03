#include "lists.h"

/**
 * remove_nodeint_at_index - removes a node at a given index in a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to remove
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int remove_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < index)
	{
		if (!current || !(current->next))
			return (-1);
		previous = current;
		current = current->next;
		i++;
	}

	previous->next = current->next;
	free(current);

	return (1);
}

