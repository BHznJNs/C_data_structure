#include "linked_list.h"

void list_rotate(LinkedList* head, idx_t idx) {
    for (idx_t _=0; _<idx; _++) {
        val_t popped_val = list_pop(head);
        list_insert(head, 0, popped_val);
    }
}
