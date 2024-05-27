#include <stdio.h>
#include "linked_list.h"

void list_push(LinkedList* head, val_t val) {
    LinkedList* node = head;
    LinkedList* new_node = node_create(val);
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = new_node;
}
