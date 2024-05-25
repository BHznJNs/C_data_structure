#include <assert.h>
#include <stdio.h>
#include "linked_list.h"

LinkedList* init_node() {
    LinkedList* head = node_create(0);
    for (val_t i=1; i<=2; i++) {
        list_push(head, i);
    }
    // 0: 0
    // 1: 1
    // 2: 2
    return head;
}

void push_test() {
    LinkedList* head = init_node();
    list_push(head, 0);
    list_logger(head);
    // 0: 0
    // 1: 1
    // 2: 2
    // 3: 0
}

void pop_test() {
    LinkedList* head = init_node();
    val_t popped_val = list_pop(head);
    assert(popped_val == 2);
    list_logger(head);
    // 0: 0
    // 1: 1
}

void insert_test() {
    LinkedList* head = init_node();
    list_insert(head, 0, -1);
    list_insert(head, 2, 3);
    list_logger(head);
    // 0: -1
    // 1: 0
    // 2: 3
    // 3: 1
    // 4: 2
}

void remove_test() {
    LinkedList* head = init_node();
    assert(list_remove(head, 1) == 1);
    assert(list_remove(head, 0) == 0);
    list_logger(head);
    // 0: 2
}

void rotate_test() {
    LinkedList* head = init_node();
    list_rotate(head, 2);
    list_logger(head);
    // 0: 1
    // 1: 2
    // 2: 0
}

void len_test() {
    LinkedList* head = init_node();
    assert(list_len(head) == 3);
    printf("len: %d\n", list_len(head));
}

void free_test() {
    LinkedList* head = init_node();
    list_free(head);
    head = NULL;
}

int main() {
    printf("push_test\n");
    push_test();
    printf("pop_test\n");
    pop_test();
    printf("insert_test\n");
    insert_test();
    printf("remove_test\n");
    remove_test();
    printf("rotate_test\n");
    rotate_test();
    printf("len_test\n");
    len_test();
    printf("free_test\n");
    free_test();
    return 0;
}
