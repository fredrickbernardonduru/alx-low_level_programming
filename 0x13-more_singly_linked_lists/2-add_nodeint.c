#ifndef LNKDLST_H
#define LNKDLST_H

#include <stdio.h>
#include <stdlib.h>

/**
*createNode - creates a new node and returns a pointer to it
@data: integer data to insert in that new node
*Return: pointer to the new node, or NULL if it fails
*/
ListNode *createNode(const int data)
{
ListNode *new = malloc(sizeof(ListNode));
if (!new)
return NULL;
new->data = data;
new->next = NULL;
return new;
}
/**
*insertAtBeginning - adds a new node at the beginning of a linked list
*@head: pointer to the first node in the list
*@data: data to insert in that new node
*Return: pointer to the new node, or NULL if it fails
*/
ListNode *insertAtBeginning(ListNode **head, const int data)
{
ListNode *newNode = createNode(data);
if (!newNode)
return NULL;
newNode->next = *head;
*head = newNode;
return newNode;
}
#endif
}
