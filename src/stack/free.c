#include <stdlib.h>
#include "stack.h"
#include "../linked_list/linked_list.h"

void stack_free(Stack* stack) {
    list_free(stack->list);
    free(stack);
}
