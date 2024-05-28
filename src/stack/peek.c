#include "stack.h"
#include "../linked_list/linked_list.h"

void* stack_peek(Stack* stack) {
    return list_get(stack->list, stack->size - 1);
}
