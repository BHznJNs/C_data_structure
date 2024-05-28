#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "../src/stack/stack.h"

void stack_push_int(Stack* stack, int val) {
    int* val_p = (int*)malloc(sizeof(int));
    *val_p = val;
    stack_push(stack, val_p);
}

// --- --- --- --- --- ---

void push_test() {
    Stack* stack = create_stack();
    stack_push_int(stack, 0);
    assert(*(int*)stack_peek(stack) == 0);
    stack_push_int(stack, 1);
    assert(*(int*)stack_peek(stack) == 1);
}

void pop_test() {
    Stack* stack = create_stack();
    stack_push_int(stack, 0);
    stack_push_int(stack, 0);
    stack_push_int(stack, 0);
    stack_push_int(stack, 4);
    assert(*(int*)stack_pop(stack) == 4);
}

void size_test() {
    Stack* stack = create_stack();
    assert(stack_size(stack) == 0);
    stack_push_int(stack, 0);
    assert(stack_size(stack) == 1);
    stack_push_int(stack, 1);
    assert(stack_size(stack) == 2);
    stack_pop(stack);
    assert(stack_size(stack) == 1);
}

int main() {
    printf("push_test\n");
    push_test();
    printf("pop_test\n");
    pop_test();
    printf("size_test\n");
    size_test();
    return 0;
}
