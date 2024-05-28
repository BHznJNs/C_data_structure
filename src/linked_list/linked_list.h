#ifndef _LINKED_LIST
#define _LINKED_LIST

typedef unsigned int idx_t;

typedef struct LinkedList {
    void* val;
    struct LinkedList* next;
} LinkedList;

LinkedList* node_create(void* val);
void        list_push  (LinkedList* head, void* val);
void*       list_pop   (LinkedList* head);
void*       list_get   (LinkedList* head, idx_t idx);
void        list_insert(LinkedList* head, idx_t idx, void* val);
void*       list_remove(LinkedList* head, idx_t idx);
void        list_rotate(LinkedList* head, idx_t idx);
idx_t       list_len   (LinkedList* head);
void        list_free  (LinkedList* head);

#include "iterator.h"

#endif /*_LINKED_LIST*/
