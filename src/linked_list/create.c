#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

LinkedList* node_create(void* val) {
    LinkedList* node = (LinkedList*)malloc(sizeof(LinkedList));
    node->val  = val;
    node->next = NULL;
    return node;
}
