#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void list_push(LinkedList* head, void* val) {
    LinkedList* node = head;
    LinkedList* new_node = node_create(val);
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = new_node;
}
