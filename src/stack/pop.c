#include "stack.h"
#include "../linked_list/linked_list.h"

val_t stack_pop(Stack* stack) {
    val_t popped_val = list_pop(stack->list);
    stack->size -= 1;
    return popped_val;
}
