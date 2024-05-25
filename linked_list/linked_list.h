#ifndef _LINKED_LIST
#define _LINKED_LIST

typedef int val_t;
typedef unsigned int idx_t;

typedef struct LinkedList {
    val_t val;
    struct LinkedList* next;
} LinkedList;

LinkedList* node_create(val_t val);
void  list_push(LinkedList* head, val_t val);
val_t list_pop (LinkedList* head);
void  list_insert(LinkedList* head, idx_t idx, val_t val);
val_t list_remove(LinkedList* head, idx_t idx);
void  list_rotate(LinkedList* head, idx_t idx);
idx_t list_len   (LinkedList* head);
void  list_free  (LinkedList* head);
void  list_logger(LinkedList* head);

#endif /*_LINKED_LIST*/
