cmake_minimum_required(VERSION 3.0.0)
project(data_structure_algorithm)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/out/)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/linked_list LINKED_LIST_SRC)
add_executable(linked_list.o ${LINKED_LIST_SRC})