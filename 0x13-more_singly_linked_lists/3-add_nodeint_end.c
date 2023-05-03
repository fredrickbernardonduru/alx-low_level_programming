#include "lists.h"

/**
*insert_nodeint_end - inserts a node at the end of a linked list
*
*@head: pointer to the first element in the list
*
*@data: data to insert in the new node
*
*Return: pointer to the new node, or NULL if it fails
*/
listint_t *insert_nodeint_end(listint_t **head, const int data)
{
listint_t *new_node;
listint_t *temp_node = *head;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = data;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp_node->next)
temp_node = temp_node->next;

temp_node->next = new_node;

return (new_node);
}
