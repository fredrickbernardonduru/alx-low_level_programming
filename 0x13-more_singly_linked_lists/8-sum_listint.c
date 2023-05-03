#include "lists.h"

/**
 * get_sum_of_list - calculates the sum of all the data in a listint_t list
 * @first_node: first node in the linked list
 *
 * Return: results
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

