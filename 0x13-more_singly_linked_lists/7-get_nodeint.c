#include "lists.h"

/**
 * get_listint_node - returns the element of a certain index in a linked list
 * @head: the first node in the linked list
 * @index: the index of the element to return
 *
 * Return: a pointer to the node we're looking for, or NULL if not found
 */
listint_t *get_listint_node(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	return (temp ? temp : NULL);
}

