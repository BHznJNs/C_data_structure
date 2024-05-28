#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void* list_pop(LinkedList* head) {
    LinkedList* node = head;
    while (node->next != NULL && node->next->next != NULL) {
        node = node->next;
    }
    void* poped_val = node->next->val;
    free(node->next);
    node->next = NULL;
    return poped_val;
}
