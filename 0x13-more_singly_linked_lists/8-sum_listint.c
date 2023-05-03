#include "lists.h"

/**
 * get_sum_of_list - calculates the sum of all the data in a listint_t list
 * @first_node: first node in the linked list
 *
 * Return: resulting sum
 */
int get_sum_of_list(listint_t *first_node)
{
int sum = 0;
listint_t *current_node = first_node;
while (current_node)
{
sum += current_node->n;
current_node = current_node->next;
}
return (sum);
}

