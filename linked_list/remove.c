#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

val_t list_remove(LinkedList* head, idx_t idx) {
    if (idx == 0) {
        val_t head_val = head->val;
        LinkedList* next_node = head->next;
        head->val  = next_node->val;
        head->next = next_node->next;
        free(next_node);
        return head_val;
    }

    LinkedList* node = head;
    idx_t i = 1;
    while (node->next != NULL) {
        if (i == idx) {
            break;
        }
        i += 1;
        node = node->next;
    }
    LinkedList* removed_node = node->next;
    val_t removed_node_val = removed_node->val;
    node->next = removed_node->next;
    free(removed_node);
    return removed_node_val;
}
