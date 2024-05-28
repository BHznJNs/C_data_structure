#include "stack.h"
#include "../linked_list/linked_list.h"

void stack_push(Stack* stack, void* val) {
    if (stack->size == 0) {
        stack->list->val = val;
        stack->size = 1;
        return;
    }
    list_push(stack->list, val);
    stack->size += 1;
}
