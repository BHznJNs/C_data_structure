#include <stdio.h>
#include "linked_list.h"

void list_logger(LinkedList* head) {
    LinkedList* node = head;
    int index = 0;
    while (node->next != NULL) {
        printf("%d: %d\n", index, node->val);
        index += 1;
        node = node->next;
    }
    printf("%d: %d\n", index, node->val);
}
