#ifndef _LINKEDLIST_ITER
#define _LINKEDLIST_ITER

#include "./linked_list.h"

typedef struct LinkedListIter {
    LinkedList* next;
} LinkedListIter;

typedef struct LinkedListIterStatus {
    char  is_done;
    val_t val;
} LinkedListIterStatus;

LinkedListIter       list_iter     (LinkedList* head);
LinkedListIterStatus list_iter_next(LinkedListIter* iter);

#endif /*_LINKEDLIST_ITER*/
