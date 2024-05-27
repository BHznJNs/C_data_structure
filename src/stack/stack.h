#ifndef _STACK
#define _STACK

#include <stddef.h>
#include "../linked_list/linked_list.h"

typedef int val_t;

typedef struct Stack {
    LinkedList* list;
    size_t size;
} Stack;

Stack* create_stack();
void   stack_push(Stack* stack, val_t val);
val_t  stack_pop (Stack* stack);
val_t* stack_peek(Stack* stack);
size_t stack_size(Stack* stack);
void   stack_free(Stack* stack);

#endif /* _STACK */
