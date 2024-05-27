#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void list_free(LinkedList* head) {
    idx_t len = list_len(head);
    LinkedList** node_list = (LinkedList**)malloc(sizeof(LinkedList*) * len);
    LinkedList*  node = head;
    node_list[0] = head;
    idx_t index = 0;
    while (node->next != NULL) {
        index += 1;
        node = node->next;
        node_list[index] = node;
    }
    for (idx_t i=0; i<len; i++) {
        LinkedList* node = node_list[i];
        free(node);
    }
}
