cmake_minimum_required(VERSION 3.25)
project(data_structures_and_algorithms)

set(CMAKE_CXX_STANDARD 17)

include_directories(data_structures)


######################### Linked List #########################
add_executable(linked_list_test data_structures/LinkedList/LinkedListTest.cpp)


######################### Stack #########################
add_library(stack_lib SHARED
        data_structures/Stack/ArrayBased/ArrayBasedStack.cpp
        data_structures/Stack/LinkedListBased/LinkedListBasedStack.cpp)

add_executable(array_based_stack_test
        data_structures/Stack/ArrayBased/ArrayBasedStackTest.cpp)

target_link_libraries(array_based_stack_test stack_lib)

add_executable(linked_list_based_stack_test
        data_structures/Stack/LinkedListBased/LinkedListBasedStackTest.cpp)

target_link_libraries(linked_list_based_stack_test stack_lib)

