#include <stdio.h>
#include "linked_list.h"

idx_t list_len(LinkedList* head) {
    idx_t list_len = 1;
    LinkedList* node = head;
    while (node->next != NULL) {
        list_len += 1;
        node = node->next;
    }
    return list_len;
}
