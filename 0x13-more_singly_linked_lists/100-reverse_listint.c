#include "lists.h"

/**
 * reverse_linked_list - reverses a linked list
 * @head_ptr: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_linked_list(listint_t **head_ptr)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head_ptr)
	{
		next_node = (*head_ptr)->next;
		(*head_ptr)->next = prev_node;
		prev_node = *head_ptr;
		*head_ptr = next_node;
	}

	*head_ptr = prev_node;

	return (*head_ptr);
}

