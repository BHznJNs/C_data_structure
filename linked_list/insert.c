#include <stdio.h>
#include "linked_list.h"

void list_insert(LinkedList* head, idx_t idx, val_t val) {
    if (idx == 0) {
        val_t head_val = head->val;
        LinkedList* new_node = node_create(head_val);
        new_node->next = head->next;
        head->next = new_node;
        head->val = val;
        return;
    }

    LinkedList* node = head;
    idx_t i = 1;
    while (node->next != NULL) {
        if (i == idx) {
            LinkedList* next_node = node->next;
            LinkedList* new_node  = node_create(val);
            node->next     = new_node;
            new_node->next = next_node;
            break;
        }
        i += 1;
        node = node->next;
    }
}
