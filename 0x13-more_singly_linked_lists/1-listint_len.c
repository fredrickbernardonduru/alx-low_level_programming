#ifndef LNKDLST_H
#define LNKDLST_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct ListNode - singly linked list
* @data: integer
* @next: points to the next node
*
* Description: singly linked list node structure
* for a sample project
*/
struct ListNode
int data;
struct ListNode *next;
};

typedef struct ListNode ListNode;

size_t printList(const ListNode *head);
size_t listLength(const ListNode *head);
ListNode *insertAtBeginning(ListNode **head, const int data);
ListNode *insertAtEnd(ListNode **head, const int data);
void freeList(ListNode *head);
void freeList2(ListNode **head);
int pop(ListNode **head);
ListNode *getNodeAtIndex(ListNode *head, unsigned int index);
int sumList(ListNode *head);
ListNode *insertAt(ListNode **head, unsigned int idx, int data);
int deleteNodeAtIndex(ListNode **head, unsigned int index);
ListNode *reverseList(ListNode **head);
size_t printListSafely(const ListNode *head);
size_t freeListSafely(ListNode **head);
ListNode *findLoopInList(ListNode *head);

#endif /* LNKDLST_H */

