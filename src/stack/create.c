#include <stdlib.h>
#include "stack.h"
#include "../linked_list/linked_list.h"

Stack* create_stack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->list = node_create(0);
    stack->size = 0;
    return stack;
}
