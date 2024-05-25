#ifndef _LINKED_LIST
#define _LINKED_LIST

typedef struct LinkedList {
    int val;
    struct LinkedList* next;
} LinkedList;

typedef int val_t;
typedef unsigned int idx_t;

LinkedList* node_create(val_t val);
void  list_push(LinkedList* head, val_t val);
val_t list_pop (LinkedList* head);
void  list_insert(LinkedList* head, idx_t idx, val_t val);
val_t list_remove(LinkedList* head, idx_t idx);
void  list_rotate(LinkedList* head, idx_t idx);
void  list_logger(LinkedList* head);

#endif /*_LINKED_LIST*/
