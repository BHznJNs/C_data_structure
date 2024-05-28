#ifndef _LINKEDLIST_ITER
#define _LINKEDLIST_ITER

#include "./linked_list.h"

typedef struct LinkedListIter {
    LinkedList* next;
} LinkedListIter;

LinkedListIter list_iter     (LinkedList* head);
void*          list_iter_next(LinkedListIter* iter);

#endif /*_LINKEDLIST_ITER*/
