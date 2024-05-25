cmake_minimum_required(VERSION 3.0.0)
project(data_structure_algorithm)

set(EXECUTABLE_OUTPUT_PATH ../out/)

add_executable(
    linked_list.o
    ./linked_list/main.c
    ./linked_list/create.c
    ./linked_list/push.c
    ./linked_list/pop.c
    ./linked_list/insert.c
    ./linked_list/remove.c
    ./linked_list/rotate.c
    ./linked_list/logger.c
)