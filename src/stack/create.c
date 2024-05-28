#include <stdlib.h>
#include "stack.h"
#include "../linked_list/linked_list.h"

Stack* create_stack() {
    LinkedList* head = node_create(NULL);
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->list = head;
    stack->size = 0;
    return stack;
}
