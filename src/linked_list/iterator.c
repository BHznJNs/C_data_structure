#include <stdio.h>
#include "linked_list.h"

LinkedListIter list_iter(LinkedList* head) {
    LinkedListIter iter = { head };
    return iter;
}

void* list_iter_next(LinkedListIter* iter) {
    LinkedList* current_node = iter->next;
    if (current_node == NULL) {
        return NULL;
    }
    LinkedList* next_node = current_node->next;
    iter->next = next_node;
    return current_node->val;
}
