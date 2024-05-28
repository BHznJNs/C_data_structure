#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "../src/linked_list/linked_list.h"

void list_push_int(LinkedList* head, int val) {
    int* val_p = (int*)malloc(sizeof(int));
    *val_p = val;
    list_push(head, val_p);
}

void list_insert_int(LinkedList* head, idx_t idx, int val) {
    int* val_p = (int*)malloc(sizeof(int));
    *val_p = val;
    list_insert(head, idx, (void*)val_p);
}

LinkedList* init_node() {
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = 0;

    LinkedList* head = node_create(ptr);
    for (int i=1; i<=2; i++) {
        list_push_int(head, i);
    }
    // 0: 0
    // 1: 1
    // 2: 2
    return head;
}

void logger_int(LinkedList* head) {
    LinkedList* node = head;
    idx_t index = 0;
    while (node->next != NULL) {
        printf("%d: %d\n", index, *(int*)node->val);
        index += 1;
        node = node->next;
    }
    printf("%d: %d\n", index, *(int*)node->val);
}

// --- --- --- --- --- ---

void push_test() {
    LinkedList* head = init_node();
    list_push_int(head, 0);
    logger_int(head);
    // 0: 0
    // 1: 1
    // 2: 2
    // 3: 0
}

void pop_test() {
    LinkedList* head  = init_node();
    void*  popped_val = list_pop(head);
    assert(*(int*)popped_val == 2);
    logger_int(head);
    // 0: 0
    // 1: 1
}

void get_test() {
    LinkedList* head = init_node();
    void* head_val   = list_get(head, 0);
    void* gotten_val = list_get(head, 2);
    int i = 1;
    assert(*(int*)head_val   == 0);
    assert(*(int*)gotten_val == 2);
}

void insert_test() {
    LinkedList* head = init_node();
    list_insert_int(head, 0, -1);
    list_insert_int(head, 2, 3);
    logger_int(head);
    // 0: -1
    // 1: 0
    // 2: 3
    // 3: 1
    // 4: 2
}

void remove_test() {
    LinkedList* head = init_node();
    assert(*(int*)list_remove(head, 1) == 1);
    assert(*(int*)list_remove(head, 0) == 0);
    logger_int(head);
    // 0: 2
}

void rotate_test() {
    LinkedList* head = init_node();
    list_rotate(head, 2);
    logger_int(head);
    // 0: 1
    // 1: 2
    // 2: 0
}

void iterator_test() {
    LinkedList* head    = init_node();
    LinkedListIter iter = list_iter(head);
    for (
        void* next_val = list_iter_next(&iter);
        next_val != NULL;
        next_val = list_iter_next(&iter)
    ) {
        printf("%d\n", *(int*)next_val);
    }
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
    printf("get_test\n");
    get_test();
    printf("insert_test\n");
    insert_test();
    printf("remove_test\n");
    remove_test();
    printf("rotate_test\n");
    rotate_test();
    printf("iterator_test\n");
    iterator_test();
    printf("len_test\n");
    len_test();
    printf("free_test\n");
    free_test();
    return 0;
}
