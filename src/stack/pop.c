#include "stack.h"
#include "../linked_list/linked_list.h"

void* stack_pop(Stack* stack) {
    void* popped_val = list_pop(stack->list);
    stack->size -= 1;
    return popped_val;
}
