#ifndef _STACK
#define _STACK

#include <stddef.h>
#include "../linked_list/linked_list.h"

typedef struct Stack {
    LinkedList* list;
    size_t size;
} Stack;

Stack* create_stack();
void   stack_push(Stack* stack, void* val);
void*  stack_pop (Stack* stack);
void*  stack_peek(Stack* stack);
size_t stack_size(Stack* stack);
void   stack_free(Stack* stack);

#endif /* _STACK */
