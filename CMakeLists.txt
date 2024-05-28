cmake_minimum_required(VERSION 3.0.0)
project(data_structure_algorithm)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/out/)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/linked_list   LINKED_LIST_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/dynamic_array DYN_ARRAY_SRC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/stack         STACK_SRC)

add_executable(linked_list.out   ./tests/linked_list.c   ${LINKED_LIST_SRC}             )
add_executable(dynamic_array.out ./tests/dynamic_array.c ${DYN_ARRAY_SRC}               )
add_executable(stack.out         ./tests/stack.c         ${STACK_SRC} ${LINKED_LIST_SRC})
