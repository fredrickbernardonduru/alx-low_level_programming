#include "lists.h"

/**
*remove_head - deletes the head node of a linked list
*@head: pointer to the first element in the linked list
*Return: the data inside the elements that was deleted,
*or 0 if the list is empty
*/
int remove_head(listint_t **head)
{
listint_t *temp;
int value;

if (!head || !*head)
return (0);

value = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (value);
}
