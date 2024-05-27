#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

LinkedList* node_create(val_t val) {
    LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
    head->val = val;
    head->next = NULL;
    return head;
}
