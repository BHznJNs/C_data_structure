#include <stdio.h>
#include "linked_list.h"

val_t* list_get(LinkedList* head, idx_t idx) {
    if (idx == 0) {
        return &head->val;
    }

    LinkedList* node = head;
    idx_t i = 1;
    while (node->next != NULL) {
        if (i == idx) {
            return &node->next->val;
        }
        i += 1;
        node = node->next;
    }
}
