#include <stdio.h>
#include "linked_list.h"

LinkedListIter list_iter(LinkedList* head) {
    LinkedListIter iter = { head };
    return iter;
}

LinkedListIterStatus list_iter_next(LinkedListIter* iter) {
    LinkedList* current_node = iter->next;
    LinkedListIterStatus status;

    if (current_node == NULL) {
        status.is_done = 1;
        status.val = 0;
        return status;
    }

    LinkedList* next_node = current_node->next;
    iter->next = next_node;
    status.is_done = 0;
    status.val = current_node->val;
    return status;
}
