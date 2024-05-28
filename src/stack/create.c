#include <stdlib.h>
#include "stack.h"
#include "../linked_list/linked_list.h"

Stack create_stack() {
    LinkedList* head = node_create(NULL);
    Stack stack = { head, 0 };
    return stack;
}
