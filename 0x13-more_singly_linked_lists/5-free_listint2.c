#include "lists.h"

/**
*deallocate_listint2 - frees a linked list
*
*@start: pointer to the listint_t list to be freed
*/
void deallocate_listint2(listint_t **start)
{
listint_t *temp;

if (start == NULL)
return;

while (*start)
{
temp = (*start)->next;
free(*start);
*start = temp;
}

*start = NULL;
}
