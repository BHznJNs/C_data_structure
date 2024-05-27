#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

val_t list_pop(LinkedList* head) {
    LinkedList* node = head;
    while (node->next != NULL && node->next->next != NULL) {
        node = node->next;
    }
    val_t poped_val = node->next->val;
    free(node->next);
    node->next = NULL;
    return poped_val;
}
