#include "lists.h"

/**
 * get_listint_node - returns the element of a certain index in a linked list
 * @head: the first node in the linked list
 * @index: the index of the element to return
 *
 * Return: a pointer to the node we're looking for, or NULL i
 */
 
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

