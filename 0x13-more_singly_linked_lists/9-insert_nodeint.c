/**

*add_node_at_index - Adds a new node in a linked list,
*at a given position
*@start: pointer to the first node in the list
*@position: index where the new node is added
*@value: data to insert in the new node
*Return: pointer to the new node, or NULL
*/
listint_t *add_node_at_index(listint_t **start, unsigned int position, int value)
{
unsigned int i;
listint_t *new_node;
listint_t *temp_node = *start;

new_node = malloc(sizeof(listint_t));
if (!new_node || !start)
return (NULL);

new_node->n = value;
new_node->next = NULL;

if (position == 0)
{
new_node->next = *start;
*start = new_node;
return (new_node);
}

for (i = 0; temp_node && i < position; i++)
{
if (i == position - 1)
{
new_node->next = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
else
temp_node = temp_node->next;
}

return (NULL);
}
